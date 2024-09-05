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
 * CreateThumbnailTemplateTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CreateThumbnailTemplateTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_CreateThumbnailTemplateTaskVM_H_


#include "CppRestOpenAPIClient/model/CreateTaskBaseVM.h"
#include "CppRestOpenAPIClient/model/CreateTaskEndVM.h"
#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {

class CreateTaskEndVM;

/// <summary>
/// 
/// </summary>
class  CreateThumbnailTemplateTaskVM
    : public CreateTaskBaseVM
{
public:
    CreateThumbnailTemplateTaskVM();
    virtual ~CreateThumbnailTemplateTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateThumbnailTemplateTaskVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();

    void setTemplateId(const utility::string_t& value);


protected:
    utility::string_t m_templateId;
    bool m_templateIdIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CreateThumbnailTemplateTaskVM_H_ */
