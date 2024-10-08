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
 * RunInputFileVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunInputFileVM_H_
#define FASTREPORT_CLOUD_MODELS_RunInputFileVM_H_


#include "CppRestOpenAPIClient/model/InputFileVM.h"
#include "CppRestOpenAPIClient/model/FileKind.h"
#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  RunInputFileVM
    : public InputFileVM
{
public:
    RunInputFileVM();
    virtual ~RunInputFileVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunInputFileVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContent() const;
    bool contentIsSet() const;
    void unsetcontent();

    void setContent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();

    void setFileName(const utility::string_t& value);


protected:
    utility::string_t m_content;
    bool m_contentIsSet;
    utility::string_t m_fileName;
    bool m_fileNameIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunInputFileVM_H_ */
