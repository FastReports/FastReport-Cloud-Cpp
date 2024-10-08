/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SubscriptionsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_SubscriptionsApi_H_
#define FASTREPORT_CLOUD_CLIENT_SubscriptionsApi_H_

#include "CloudKludge.h"

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/DefaultPermissionsVM.h"
#include "CppRestOpenAPIClient/model/MyPermissionsVM.h"
#include "CppRestOpenAPIClient/model/ProblemDetails.h"
#include "CppRestOpenAPIClient/model/RenameSubscriptionVM.h"
#include "CppRestOpenAPIClient/model/SubscriptionPermissionsVM.h"
#include "CppRestOpenAPIClient/model/SubscriptionVM.h"
#include "CppRestOpenAPIClient/model/SubscriptionsVM.h"
#include "CppRestOpenAPIClient/model/UpdateDefaultPermissionsVM.h"
#include "CppRestOpenAPIClient/model/UpdateSubscriptionLocaleVM.h"
#include "CppRestOpenAPIClient/model/UpdateSubscriptionPermissionsVM.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  SubscriptionsApi 
{
public:

    explicit SubscriptionsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubscriptionsApi();

    /// <summary>
    /// Get subscription&#39;s default permissions for new entities
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">id</param>
    pplx::task<std::shared_ptr<DefaultPermissionsVM>> subscriptionsGetDefaultPermissions(
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// Get user&#39;s permissions for a subscription by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subId">subscription id</param>
    pplx::task<std::shared_ptr<MyPermissionsVM>> subscriptionsGetMyPermissions(
        utility::string_t subId
    ) const;
    /// <summary>
    /// Get permissions for a subscription by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<SubscriptionPermissionsVM>> subscriptionsGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns the subscription by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of subscription</param>
    pplx::task<std::shared_ptr<SubscriptionVM>> subscriptionsGetSubscription(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a list of all subscriptions of current user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="skip">Variable for pagination, defautl value is 0 (optional, default to 0)</param>
    /// <param name="take">Variable for pagination, default value is 10 (optional, default to 0)</param>
    pplx::task<std::shared_ptr<SubscriptionsVM>> subscriptionsGetSubscriptions(
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Rename subscription
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">id</param>
    /// <param name="renameSubscriptionVM">rename VM</param>
    pplx::task<std::shared_ptr<SubscriptionVM>> subscriptionsRenameSubscription(
        utility::string_t subscriptionId,
        std::shared_ptr<RenameSubscriptionVM> renameSubscriptionVM
    ) const;
    /// <summary>
    /// Change subscription&#39;s default permissions for new entities
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">id</param>
    /// <param name="updateDefaultPermissionsVM">update default permissions VM</param>
    pplx::task<std::shared_ptr<DefaultPermissionsVM>> subscriptionsUpdateDefaultPermissions(
        utility::string_t subscriptionId,
        std::shared_ptr<UpdateDefaultPermissionsVM> updateDefaultPermissionsVM
    ) const;
    /// <summary>
    /// Update subscription&#39;s default locale
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">id</param>
    /// <param name="updateSubscriptionLocaleVM">update VM</param>
    pplx::task<std::shared_ptr<SubscriptionVM>> subscriptionsUpdateLocale(
        utility::string_t subscriptionId,
        std::shared_ptr<UpdateSubscriptionLocaleVM> updateSubscriptionLocaleVM
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="updateSubscriptionPermissionsVM"> (optional)</param>
    pplx::task<void> subscriptionsUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateSubscriptionPermissionsVM>> updateSubscriptionPermissionsVM
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_SubscriptionsApi_H_ */

