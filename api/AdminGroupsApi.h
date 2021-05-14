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
 * AdminGroupsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_AdminGroupsApi_H_
#define FASTREPORT_CLOUD_CLIENT_AdminGroupsApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "CreateGroupAdminVM.h"
#include "GroupPermissionsVM.h"
#include "GroupVM.h"
#include "GroupsVM.h"
#include "ProblemDetails.h"
#include "UpdateGroupPermissionsVM.h"
#include "UpdateGroupVM.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  AdminGroupsApi 
{
public:

    explicit AdminGroupsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AdminGroupsApi();

    /// <summary>
    /// Create a new group, returns a new model
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="viewModel"> (optional)</param>
    pplx::task<std::shared_ptr<GroupVM>> adminGroupsCreateGroup(
        boost::optional<std::shared_ptr<CreateGroupAdminVM>> viewModel
    ) const;
    /// <summary>
    /// Delete a group by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<void> adminGroupsDeleteGroup(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a group by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<std::shared_ptr<GroupVM>> adminGroupsGetGroup(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a list of groups
    /// </summary>
    /// <remarks>
    /// If no groups, then the endpoint will return empty list
    /// </remarks>
    /// <param name="skip">Variable for pagination, defautl value is 0 (optional, default to 0)</param>
    /// <param name="take">Variable for pagination, default value is 10 (optional, default to 0)</param>
    /// <param name="subscriptionId">Allow to filter by subscription id (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<GroupsVM>> adminGroupsGetGroups(
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<utility::string_t> subscriptionId
    ) const;
    /// <summary>
    /// Gets group permissions by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<std::shared_ptr<GroupPermissionsVM>> adminGroupsGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Update a group by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="viewModel">update vm (optional)</param>
    pplx::task<std::shared_ptr<GroupVM>> adminGroupsUpdateGroup(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateGroupVM>> viewModel
    ) const;
    /// <summary>
    /// Update permissions in user group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="newPermissions">Model with new permissions (optional)</param>
    pplx::task<void> adminGroupsUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateGroupPermissionsVM>> newPermissions
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_AdminGroupsApi_H_ */
