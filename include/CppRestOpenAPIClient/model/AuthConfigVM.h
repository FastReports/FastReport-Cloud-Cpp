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
 * AuthConfigVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AuthConfigVM_H_
#define FASTREPORT_CLOUD_MODELS_AuthConfigVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  AuthConfigVM
    : public CloudBaseVM
{
public:
    AuthConfigVM();
    virtual ~AuthConfigVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AuthConfigVM members

    /// <summary>
    /// 
    /// </summary>
    bool isUseLocal() const;
    bool useLocalIsSet() const;
    void unsetuseLocal();

    void setUseLocal(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isUseOpenId() const;
    bool useOpenIdIsSet() const;
    void unsetuseOpenId();

    void setUseOpenId(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAuthority() const;
    bool authorityIsSet() const;
    void unsetauthority();

    void setAuthority(const utility::string_t& value);


protected:
    bool m_useLocal;
    bool m_useLocalIsSet;
    bool m_useOpenId;
    bool m_useOpenIdIsSet;
    utility::string_t m_authority;
    bool m_authorityIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AuthConfigVM_H_ */
