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
 * SubscriptionDelete.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionDelete_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionDelete_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  SubscriptionDelete
    : public ModelBase
{
public:
    SubscriptionDelete();
    virtual ~SubscriptionDelete();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eSubscriptionDelete
    {
        SubscriptionDelete__0,
        SubscriptionDelete__1,
        SubscriptionDelete__2,
        SubscriptionDelete__4,
        SubscriptionDelete__8,
        SubscriptionDelete__12,
    };

    eSubscriptionDelete getValue() const;
    void setValue(eSubscriptionDelete const value);

    protected:
        eSubscriptionDelete m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionDelete_H_ */
