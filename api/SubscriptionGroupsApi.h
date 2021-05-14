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
 * SubscriptionGroupsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_SubscriptionGroupsApi_H_
#define FASTREPORT_CLOUD_CLIENT_SubscriptionGroupsApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "GroupsVM.h"
#include "ProblemDetails.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  SubscriptionGroupsApi 
{
public:

    explicit SubscriptionGroupsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubscriptionGroupsApi();

    /// <summary>
    /// returns groups of the subscription or subscription user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">subscripiton id</param>
    /// <param name="userId">user Id (optional) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<GroupsVM>> subscriptionGroupsGetGroupsList(
        utility::string_t subscriptionId,
        boost::optional<utility::string_t> userId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_SubscriptionGroupsApi_H_ */

