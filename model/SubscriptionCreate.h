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
 * SubscriptionCreate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionCreate_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionCreate_H_

#include "CloudKludge.h"
#include "../ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  SubscriptionCreate
    : public ModelBase
{
public:
    SubscriptionCreate();
    virtual ~SubscriptionCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eSubscriptionCreate
    {
        SubscriptionCreate__0,
        SubscriptionCreate__1,
        SubscriptionCreate__2,
        SubscriptionCreate__4,
        SubscriptionCreate__8,
        SubscriptionCreate__1,
    };

    eSubscriptionCreate getValue() const;
    void setValue(eSubscriptionCreate const value);

    protected:
        eSubscriptionCreate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionCreate_H_ */
