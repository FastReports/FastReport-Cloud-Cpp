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
 * AdminSubscriptionAnalyticsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_AdminSubscriptionAnalyticsApi_H_
#define FASTREPORT_CLOUD_CLIENT_AdminSubscriptionAnalyticsApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "AnalysisResultsVM.h"
#include "ProblemDetails.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  AdminSubscriptionAnalyticsApi 
{
public:

    explicit AdminSubscriptionAnalyticsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AdminSubscriptionAnalyticsApi();

    /// <summary>
    /// This will check if there are any files, related to subscription that available for anonymous users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsCheckAnonPermissions(
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// This will check if there are any files, related to subscription that not available for subscription users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsCheckOtherPermissions(
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// This will check if there are any deleted subscriptions in users sub lists
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsGetDeadSubsInUsers(
    ) const;
    /// <summary>
    /// This will check if there are any subscriptions without users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsGetEmptySubs(
    ) const;
    /// <summary>
    /// This will check if there are any files in gridFS, which not related to any file model
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsGetLostFileChunks(
    ) const;
    /// <summary>
    /// This will check if there are any files, that not related to any existing subscription
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<AnalysisResultsVM>> adminSubscriptionAnalyticsGetUnrelatedDocuments(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_AdminSubscriptionAnalyticsApi_H_ */

