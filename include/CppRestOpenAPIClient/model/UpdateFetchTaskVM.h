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
 * UpdateFetchTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateFetchTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateFetchTaskVM_H_


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
class  UpdateFetchTaskVM
    : public UpdateTaskBaseVM
{
public:
    UpdateFetchTaskVM();
    virtual ~UpdateFetchTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateFetchTaskVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDataSourceId() const;
    bool dataSourceIdIsSet() const;
    void unsetdataSourceId();

    void setDataSourceId(const utility::string_t& value);


protected:
    utility::string_t m_dataSourceId;
    bool m_dataSourceIdIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UpdateFetchTaskVM_H_ */
