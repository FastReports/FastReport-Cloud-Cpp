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
 * SubscriptionAdministrate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionAdministrate_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionAdministrate_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  SubscriptionAdministrate
    : public ModelBase
{
public:
    SubscriptionAdministrate();
    virtual ~SubscriptionAdministrate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eSubscriptionAdministrate
    {
        SubscriptionAdministrate__0,
        SubscriptionAdministrate__1,
        SubscriptionAdministrate__2,
        SubscriptionAdministrate__4,
        SubscriptionAdministrate__8,
        SubscriptionAdministrate__12,
    };

    eSubscriptionAdministrate getValue() const;
    void setValue(eSubscriptionAdministrate const value);

    protected:
        eSubscriptionAdministrate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionAdministrate_H_ */
