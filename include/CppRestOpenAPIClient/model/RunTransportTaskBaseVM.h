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
 * RunTransportTaskBaseVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_
#define FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_


#include "CppRestOpenAPIClient/model/RunTaskBaseVM.h"
#include "CppRestOpenAPIClient/model/RunInputFileVM.h"
#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {

class RunInputFileVM;

/// <summary>
/// 
/// </summary>
class  RunTransportTaskBaseVM
    : public RunTaskBaseVM
{
public:
    RunTransportTaskBaseVM();
    virtual ~RunTransportTaskBaseVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunTransportTaskBaseVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RunInputFileVM> getInputFile() const;
    bool inputFileIsSet() const;
    void unsetinputFile();

    void setInputFile(const std::shared_ptr<RunInputFileVM>& value);


protected:
    std::shared_ptr<RunInputFileVM> m_inputFile;
    bool m_inputFileIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_ */
