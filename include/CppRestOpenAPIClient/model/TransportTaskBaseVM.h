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
 * TransportTaskBaseVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_
#define FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/InputFileVM.h"
#include "CppRestOpenAPIClient/model/TaskBaseVM.h"
#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {

class InputFileVM;

/// <summary>
/// 
/// </summary>
class  TransportTaskBaseVM
    : public ModelBase
{
public:
    TransportTaskBaseVM();
    virtual ~TransportTaskBaseVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TransportTaskBaseVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InputFileVM> getInputFile() const;
    bool inputFileIsSet() const;
    void unsetinputFile();

    void setInputFile(const std::shared_ptr<InputFileVM>& value);


protected:
    std::shared_ptr<InputFileVM> m_inputFile;
    bool m_inputFileIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_ */
