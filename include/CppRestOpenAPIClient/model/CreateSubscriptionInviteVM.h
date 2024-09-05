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
 * CreateSubscriptionInviteVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CreateSubscriptionInviteVM_H_
#define FASTREPORT_CLOUD_MODELS_CreateSubscriptionInviteVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  CreateSubscriptionInviteVM
    : public CloudBaseVM
{
public:
    CreateSubscriptionInviteVM();
    virtual ~CreateSubscriptionInviteVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateSubscriptionInviteVM members

    /// <summary>
    /// 
    /// </summary>
    int64_t getUsages() const;
    bool usagesIsSet() const;
    void unsetusages();

    void setUsages(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isDurable() const;
    bool durableIsSet() const;
    void unsetdurable();

    void setDurable(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpiredDate() const;
    bool expiredDateIsSet() const;
    void unsetexpiredDate();

    void setExpiredDate(const utility::datetime& value);


protected:
    int64_t m_usages;
    bool m_usagesIsSet;
    bool m_durable;
    bool m_durableIsSet;
    utility::datetime m_expiredDate;
    bool m_expiredDateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CreateSubscriptionInviteVM_H_ */
