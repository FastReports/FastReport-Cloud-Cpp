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
 * ReportFolderCreateVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_ReportFolderCreateVM_H_
#define FASTREPORT_CLOUD_MODELS_ReportFolderCreateVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/FolderCreateVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  ReportFolderCreateVM
    : public FolderCreateVM
{
public:
    ReportFolderCreateVM();
    virtual ~ReportFolderCreateVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReportFolderCreateVM members


protected:
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_ReportFolderCreateVM_H_ */
