#pragma once
#include "slang/macros.h"

BEGIN_SPEC(grouped_conv2d)

DECLARE_TENSOR_PARAM(Input, REQUIRED)
DECLARE_TENSOR_PARAM(Kernel, REQUIRED)
DECLARE_TENSOR_PARAM(Bias, REQUIRED)
DECLARE_TENSOR_PARAM(Output, REQUIRED)

DECLARE_SCALAR_PARAM(Stride, REQUIRED)
DECLARE_SCALAR_PARAM(Dilation, REQUIRED)
DECLARE_SCALAR_PARAM(PadType, REQUIRED)
DECLARE_SCALAR_PARAM(Pad, REQUIRED)
DECLARE_SCALAR_PARAM(Groups, REQUIRED)
DECLARE_SCALAR_PARAM(Activation, REQUIRED)
DECLARE_SCALAR_PARAM(Layout, REQUIRED)

DECLARE_SIGNATURE(
    Input, Kernel, Bias, Output, Stride, Dilation, PadType, Pad, Groups, Activation, Layout)

#include "signature.slang.h"
#include "rule.slang.h"
END_SPEC(grouped_conv2d)
