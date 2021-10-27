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
 * GroupCreate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_GroupCreate_H_
#define FASTREPORT_CLOUD_MODELS_GroupCreate_H_

#include "CloudKludge.h"
#include "../ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  GroupCreate
    : public ModelBase
{
public:
    GroupCreate();
    virtual ~GroupCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eGroupCreate
    {
        GroupCreate__0,
        GroupCreate__1,
        GroupCreate__1,
    };

    eGroupCreate getValue() const;
    void setValue(eGroupCreate const value);

    protected:
        eGroupCreate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_GroupCreate_H_ */