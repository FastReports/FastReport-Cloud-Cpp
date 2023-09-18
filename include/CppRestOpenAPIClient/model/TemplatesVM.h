/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TemplatesVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TemplatesVM_H_
#define FASTREPORT_CLOUD_MODELS_TemplatesVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/TemplateVM.h"
#include "CppRestOpenAPIClient/model/TemplateVMFilesVMBase.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class TemplateVM;

/// <summary>
/// 
/// </summary>
class  TemplatesVM
    : public ModelBase
{
public:
    TemplatesVM();
    virtual ~TemplatesVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TemplatesVM members


protected:
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TemplatesVM_H_ */