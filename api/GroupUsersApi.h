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
 * GroupUsersApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_GroupUsersApi_H_
#define FASTREPORT_CLOUD_CLIENT_GroupUsersApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "GroupUsersVM.h"
#include "ProblemDetails.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  GroupUsersApi 
{
public:

    explicit GroupUsersApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~GroupUsersApi();

    /// <summary>
    /// Add user to the group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="userId">Identifier of user</param>
    pplx::task<void> groupUsersAddUserToGroup(
        utility::string_t id,
        utility::string_t userId
    ) const;
    /// <summary>
    /// Returns users in the group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="skip">how many to skip (optional, default to 0)</param>
    /// <param name="take">how many to take (optional, default to 0)</param>
    pplx::task<std::shared_ptr<GroupUsersVM>> groupUsersGetUsersInGroup(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Leave from the group
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    pplx::task<void> groupUsersLeaveFromGroup(
        utility::string_t id
    ) const;
    /// <summary>
    /// Remove user from the group by identifier
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">Identifier of group</param>
    /// <param name="userId">Identifier of user</param>
    pplx::task<void> groupUsersRemoveFromGroup(
        utility::string_t id,
        utility::string_t userId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_GroupUsersApi_H_ */
