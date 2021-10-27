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
 * CreateEndpointVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CreateEndpointVM_H_
#define FASTREPORT_CLOUD_MODELS_CreateEndpointVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "EndpointVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  CreateEndpointVM
    : public ModelBase
{
public:
    CreateEndpointVM();
    virtual ~CreateEndpointVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateEndpointVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBearerToken() const;
    bool bearerTokenIsSet() const;
    void unsetbearerToken();

    void setBearerToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unseturl();

    void setUrl(const utility::string_t& value);


protected:
    utility::string_t m_bearerToken;
    bool m_bearerTokenIsSet;
    utility::string_t m_url;
    bool m_urlIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CreateEndpointVM_H_ */
