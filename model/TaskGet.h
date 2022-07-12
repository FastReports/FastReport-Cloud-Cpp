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
 * TaskGet.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TaskGet_H_
#define FASTREPORT_CLOUD_MODELS_TaskGet_H_

#include "CloudKludge.h"
#include "../ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  TaskGet
    : public ModelBase
{
public:
    TaskGet();
    virtual ~TaskGet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eTaskGet
    {
        TaskGet__0,
        TaskGet__1,
        TaskGet__2,
        TaskGet__4,
        TaskGet__1,
    };

    eTaskGet getValue() const;
    void setValue(eTaskGet const value);

    protected:
        eTaskGet m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TaskGet_H_ */
