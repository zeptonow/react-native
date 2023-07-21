/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 *
 * @format
 */

'use strict';

function _slicedToArray(arr, i) {
  return (
    _arrayWithHoles(arr) ||
    _iterableToArrayLimit(arr, i) ||
    _unsupportedIterableToArray(arr, i) ||
    _nonIterableRest()
  );
}
function _nonIterableRest() {
  throw new TypeError(
    'Invalid attempt to destructure non-iterable instance.\nIn order to be iterable, non-array objects must have a [Symbol.iterator]() method.',
  );
}
function _unsupportedIterableToArray(o, minLen) {
  if (!o) return;
  if (typeof o === 'string') return _arrayLikeToArray(o, minLen);
  var n = Object.prototype.toString.call(o).slice(8, -1);
  if (n === 'Object' && o.constructor) n = o.constructor.name;
  if (n === 'Map' || n === 'Set') return Array.from(o);
  if (n === 'Arguments' || /^(?:Ui|I)nt(?:8|16|32)(?:Clamped)?Array$/.test(n))
    return _arrayLikeToArray(o, minLen);
}
function _arrayLikeToArray(arr, len) {
  if (len == null || len > arr.length) len = arr.length;
  for (var i = 0, arr2 = new Array(len); i < len; i++) arr2[i] = arr[i];
  return arr2;
}
function _iterableToArrayLimit(arr, i) {
  var _i =
    null == arr
      ? null
      : ('undefined' != typeof Symbol && arr[Symbol.iterator]) ||
        arr['@@iterator'];
  if (null != _i) {
    var _s,
      _e,
      _x,
      _r,
      _arr = [],
      _n = !0,
      _d = !1;
    try {
      if (((_x = (_i = _i.call(arr)).next), 0 === i)) {
        if (Object(_i) !== _i) return;
        _n = !1;
      } else
        for (
          ;
          !(_n = (_s = _x.call(_i)).done) &&
          (_arr.push(_s.value), _arr.length !== i);
          _n = !0
        );
    } catch (err) {
      (_d = !0), (_e = err);
    } finally {
      try {
        if (!_n && null != _i.return && ((_r = _i.return()), Object(_r) !== _r))
          return;
      } finally {
        if (_d) throw _e;
      }
    }
    return _arr;
  }
}
function _arrayWithHoles(arr) {
  if (Array.isArray(arr)) return arr;
}
const _require = require('./Utils'),
  createAliasResolver = _require.createAliasResolver,
  getModules = _require.getModules;
const _require2 = require('../../parsers/flow/modules/utils'),
  unwrapNullable = _require2.unwrapNullable;
const ModuleClassDeclarationTemplate = ({
  hasteModuleName,
  moduleProperties,
}) => {
  return `class JSI_EXPORT ${hasteModuleName}CxxSpecJSI : public TurboModule {
protected:
  ${hasteModuleName}CxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
${moduleProperties}

};`;
};
const FileTemplate = ({modules}) => {
  return `/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * ${'@'}generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>

namespace facebook {
namespace react {
${modules}

} // namespace react
} // namespace facebook
`;
};
function translatePrimitiveJSTypeToCpp(
  nullableTypeAnnotation,
  createErrorMessage,
  resolveAlias,
) {
  const _unwrapNullable = unwrapNullable(nullableTypeAnnotation),
    _unwrapNullable2 = _slicedToArray(_unwrapNullable, 1),
    typeAnnotation = _unwrapNullable2[0];
  let realTypeAnnotation = typeAnnotation;
  if (realTypeAnnotation.type === 'TypeAliasTypeAnnotation') {
    realTypeAnnotation = resolveAlias(realTypeAnnotation.name);
  }
  switch (realTypeAnnotation.type) {
    case 'ReservedTypeAnnotation':
      switch (realTypeAnnotation.name) {
        case 'RootTag':
          return 'double';
        default:
          realTypeAnnotation.name;
          throw new Error(createErrorMessage(realTypeAnnotation.name));
      }
    case 'VoidTypeAnnotation':
      return 'void';
    case 'StringTypeAnnotation':
      return 'jsi::String';
    case 'NumberTypeAnnotation':
      return 'double';
    case 'DoubleTypeAnnotation':
      return 'double';
    case 'FloatTypeAnnotation':
      return 'double';
    case 'Int32TypeAnnotation':
      return 'int';
    case 'BooleanTypeAnnotation':
      return 'bool';
    case 'GenericObjectTypeAnnotation':
      return 'jsi::Object';
    case 'ObjectTypeAnnotation':
      return 'jsi::Object';
    case 'ArrayTypeAnnotation':
      return 'jsi::Array';
    case 'FunctionTypeAnnotation':
      return 'jsi::Function';
    case 'PromiseTypeAnnotation':
      return 'jsi::Value';
    default:
      realTypeAnnotation.type;
      throw new Error(createErrorMessage(realTypeAnnotation.type));
  }
}
const propertyTemplate =
  'virtual ::_RETURN_VALUE_:: ::_PROPERTY_NAME_::(jsi::Runtime &rt::_ARGS_::) = 0;';
module.exports = {
  generate(libraryName, schema, packageName, assumeNonnull = false) {
    const nativeModules = getModules(schema);
    const modules = Object.keys(nativeModules)
      .map(hasteModuleName => {
        const _nativeModules$hasteM = nativeModules[hasteModuleName],
          aliases = _nativeModules$hasteM.aliases,
          properties = _nativeModules$hasteM.spec.properties;
        const resolveAlias = createAliasResolver(aliases);
        const traversedProperties = properties
          .map(prop => {
            const _unwrapNullable3 = unwrapNullable(prop.typeAnnotation),
              _unwrapNullable4 = _slicedToArray(_unwrapNullable3, 1),
              propTypeAnnotation = _unwrapNullable4[0];
            const traversedArgs = propTypeAnnotation.params
              .map(param => {
                const translatedParam = translatePrimitiveJSTypeToCpp(
                  param.typeAnnotation,
                  typeName =>
                    `Unsupported type for param "${param.name}" in ${prop.name}. Found: ${typeName}`,
                  resolveAlias,
                );
                const isObject = translatedParam.startsWith('jsi::');
                return (
                  (isObject
                    ? 'const ' + translatedParam + ' &'
                    : translatedParam + ' ') + param.name
                );
              })
              .join(', ');
            return propertyTemplate
              .replace('::_PROPERTY_NAME_::', prop.name)
              .replace(
                '::_RETURN_VALUE_::',
                translatePrimitiveJSTypeToCpp(
                  propTypeAnnotation.returnTypeAnnotation,
                  typeName =>
                    `Unsupported return type for ${prop.name}. Found: ${typeName}`,
                  resolveAlias,
                ),
              )
              .replace(
                '::_ARGS_::',
                traversedArgs === '' ? '' : ', ' + traversedArgs,
              );
          })
          .join('\n');
        return ModuleClassDeclarationTemplate({
          hasteModuleName,
          moduleProperties: traversedProperties,
        });
      })
      .join('\n');
    const fileName = 'NativeModules.h';
    const replacedTemplate = FileTemplate({
      modules,
    });
    return new Map([[fileName, replacedTemplate]]);
  },
};
