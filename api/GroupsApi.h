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
 * GroupsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_GroupsApi_H_
#define FASTREPORT_CLOUD_CLIENT_GroupsApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "CreateGroupVM.h"
#include "GroupPermissionsVM.h"
#include "GroupVM.h"
#include "GroupsVM.h"
#include "ProblemDetails.h"
#include "RenameGroupVM.h"
#include "UpdateGroupPermissionsVM.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  GroupsApi 
{
public:

    explicit GroupsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~GroupsApi();

    /// <summary>
    /// Create a new user group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="viewModel">Model for creating (optional)</param>
    pplx::task<std::shared_ptr<GroupVM>> groupsCreateGroup(
        boost::optional<std::shared_ptr<CreateGroupVM>> viewModel
    ) const;
    /// <summary>
    /// Delete group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<void> groupsDeleteGroup(
        utility::string_t id
    ) const;
    /// <summary>
    /// Gets group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<std::shared_ptr<GroupVM>> groupsGetGroup(
        utility::string_t id
    ) const;
    /// <summary>
    /// Gets list of user groups
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="skip">How many groups need to skip (optional, default to 0)</param>
    /// <param name="take">How many groups need to take (optional, default to 0)</param>
    pplx::task<std::shared_ptr<GroupsVM>> groupsGetGroupList(
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Gets group permissions by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<std::shared_ptr<GroupPermissionsVM>> groupsGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Rename group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="viewModel">Model for renaming</param>
    pplx::task<std::shared_ptr<GroupVM>> groupsRenameGroup(
        utility::string_t id,
        std::shared_ptr<RenameGroupVM> viewModel
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="permissionsVM"> (optional)</param>
    pplx::task<void> groupsUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateGroupPermissionsVM>> permissionsVM
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_GroupsApi_H_ */
