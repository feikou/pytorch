#pragma once

/**
 * GENERATED CODE - DO NOT EDIT DIRECTLY
 * This file is generated by gen_diagnostics.py.
 * See tools/onnx/gen_diagnostics.py for more information.
 *
 * Diagnostic rules for PyTorch ONNX export.
 */

namespace torch {
namespace onnx {
namespace diagnostics {

enum class Rule : uint32_t {
  /**
   * @brief Node is missing ONNX shape inference.
   */
  kNodeMissingOnnxShapeInference,

  /**
   * @brief Missing symbolic function for custom PyTorch operator, cannot
   * translate node to ONNX.
   */
  kMissingCustomSymbolicFunction,

  /**
   * @brief Missing symbolic function for standard PyTorch operator, cannot
   * translate node to ONNX.
   */
  kMissingStandardSymbolicFunction,

  /**
   * @brief Operator is supported in newer opset version.
   */
  kOperatorSupportedInNewerOpsetVersion,

  /**
   * @brief FX Tracer succeeded.
   */
  kFxTracerSuccess,

  /**
   * @brief FX Tracer failed.
   */
  kFxTracerFailure,

  /**
   * @brief FX Tracer succeeded.
   */
  kFxFrontendAotautograd,

  /**
   * @brief FX pass converting torch.neg to torch.sigmoid.
   */
  kFxPassConvertNegToSigmoid,

  /**
   * @brief ToDo, experimenting diagnostics, placeholder text.
   */
  kFxIrAddNode,

  /**
   * @brief Op level tracking. ToDo, experimenting diagnostics, placeholder
   * text.
   */
  kAtenlibSymbolicFunction,

  /**
   * @brief Graph level tracking. Each op is a step. ToDo, experimenting
   * diagnostics, placeholder text.
   */
  kAtenlibFxToOnnx,

  /**
   * @brief Node level tracking. ToDo, experimenting diagnostics, placeholder
   * text.
   */
  kFxNodeToOnnx,

  /**
   * @brief The make_fx + decomposition pass on fx graph produced from Dynamo,
   * before ONNX export.
   */
  kFxFrontendDynamoMakeFx,

  /**
   * @brief FX graph transformation before ONNX export.
   */
  kFxPass,

  /**
   * @brief Cannot find symbolic function to convert the "call_function" FX node
   * to ONNX.
   */
  kNoSymbolicFunctionForCallFunction,

  /**
   * @brief Result from FX graph analysis to reveal unsupported FX nodes.
   */
  kUnsupportedFxNodeAnalysis,

  /**
   * @brief Report any op level validation failure in warnings.
   */
  kOpLevelDebugging,

  /**
   * @brief Find the OnnxFunction that matches the input dtypes by comparing
   * them with their opschemas.
   */
  kFindOpschemaMatchedSymbolicFunction,

  /**
   * @brief Determine if type promotion is required for the FX node. Insert cast
   * nodes if needed.
   */
  kFxNodeInsertTypePromotion,

  /**
   * @brief Find the list of OnnxFunction of the PyTorch operator in onnx
   * registry.
   */
  kFindOperatorOverloadsInOnnxRegistry,

  /**
   * @brief The formatted str for argument to display is too verbose.
   */
  kArgFormatTooVerbose,
};

static constexpr const char* const kPyRuleNames[] = {
    "node_missing_onnx_shape_inference",
    "missing_custom_symbolic_function",
    "missing_standard_symbolic_function",
    "operator_supported_in_newer_opset_version",
    "fx_tracer_success",
    "fx_tracer_failure",
    "fx_frontend_aotautograd",
    "fx_pass_convert_neg_to_sigmoid",
    "fx_ir_add_node",
    "atenlib_symbolic_function",
    "atenlib_fx_to_onnx",
    "fx_node_to_onnx",
    "fx_frontend_dynamo_make_fx",
    "fx_pass",
    "no_symbolic_function_for_call_function",
    "unsupported_fx_node_analysis",
    "op_level_debugging",
    "find_opschema_matched_symbolic_function",
    "fx_node_insert_type_promotion",
    "find_operator_overloads_in_onnx_registry",
    "arg_format_too_verbose",
};

} // namespace diagnostics
} // namespace onnx
} // namespace torch
