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
 * ApiKeysApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_ApiKeysApi_H_
#define FASTREPORT_CLOUD_CLIENT_ApiKeysApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "ApiKeyVM.h"
#include "ApiKeysVM.h"
#include "CreateApiKeyVM.h"
#include "DeleteApiKeyVM.h"
#include "ProblemDetails.h"


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  ApiKeysApi 
{
public:

    explicit ApiKeysApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ApiKeysApi();

    /// <summary>
    /// Create a new apikey, 5 apikeys for user. Hardcoded for ddos.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="model"></param>
    pplx::task<std::shared_ptr<ApiKeyVM>> apiKeysCreateApiKey(
        std::shared_ptr<CreateApiKeyVM> model
    ) const;
    /// <summary>
    /// Delete an apikey
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="model"></param>
    pplx::task<void> apiKeysDeleteApiKey(
        std::shared_ptr<DeleteApiKeyVM> model
    ) const;
    /// <summary>
    /// Returns list with all api keys of current user
    /// </summary>
    /// <remarks>
    /// Always work, it should make only 200 response (except if user is not authorized).
    /// </remarks>
    pplx::task<std::shared_ptr<ApiKeysVM>> apiKeysGetApiKeys(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_ApiKeysApi_H_ */

