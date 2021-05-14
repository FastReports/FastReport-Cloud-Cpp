/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdminSubscriptionProblemSolvingApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_AdminSubscriptionProblemSolvingApi_H_
#define FASTREPORT_CLOUD_CLIENT_AdminSubscriptionProblemSolvingApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "AnalysisResultsVM.h"
#include "ProblemDetails.h"


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  AdminSubscriptionProblemSolvingApi 
{
public:

    explicit AdminSubscriptionProblemSolvingApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AdminSubscriptionProblemSolvingApi();

    /// <summary>
    /// Solve problems provided by FastReport.Cloud.Admin.Controllers.SubscriptionAnalyticsController
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="analysisResults"> (optional)</param>
    pplx::task<void> adminSubscriptionProblemSolvingSolveProblems(
        boost::optional<std::shared_ptr<AnalysisResultsVM>> analysisResults
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_AdminSubscriptionProblemSolvingApi_H_ */
