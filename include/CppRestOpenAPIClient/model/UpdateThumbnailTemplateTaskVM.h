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
 * UpdateThumbnailTemplateTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateThumbnailTemplateTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateThumbnailTemplateTaskVM_H_


#include "CppRestOpenAPIClient/model/CreateTaskEndVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/UpdateTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {

class CreateTaskEndVM;

/// <summary>
/// 
/// </summary>
class  UpdateThumbnailTemplateTaskVM
    : public UpdateTaskBaseVM
{
public:
    UpdateThumbnailTemplateTaskVM();
    virtual ~UpdateThumbnailTemplateTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateThumbnailTemplateTaskVM members

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

#endif /* FASTREPORT_CLOUD_MODELS_UpdateThumbnailTemplateTaskVM_H_ */
