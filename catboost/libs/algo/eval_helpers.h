#pragma once

#include "params.h"

#include <catboost/libs/data/pool.h>

#include <library/threading/local_executor/local_executor.h>

#include <util/generic/vector.h>

yvector<yvector<double>> PrepareEval(const EPredictionType predictionType,
                                     const yvector<yvector<double>>& approx,
                                     NPar::TLocalExecutor* localExecutor);

void OutputTestEval(
    const yvector<yvector<double>>& testApprox,
    const TString& testEvalFile,
    const yvector<TDocInfo>& docIds,
    const bool outputTarget);

