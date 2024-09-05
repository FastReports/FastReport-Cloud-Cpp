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
 * DataSourceParameterTypesVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_DataSourceParameterTypesVM_H_
#define FASTREPORT_CLOUD_MODELS_DataSourceParameterTypesVM_H_


#include "CppRestOpenAPIClient/model/DataSourceParameterTypeVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class DataSourceParameterTypeVM;

/// <summary>
/// 
/// </summary>
class  DataSourceParameterTypesVM
    : public CloudBaseVM
{
public:
    DataSourceParameterTypesVM();
    virtual ~DataSourceParameterTypesVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataSourceParameterTypesVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataSourceParameterTypeVM>>& getDataTypes();
    bool dataTypesIsSet() const;
    void unsetdataTypes();

    void setDataTypes(const std::vector<std::shared_ptr<DataSourceParameterTypeVM>>& value);


protected:
    std::vector<std::shared_ptr<DataSourceParameterTypeVM>> m_dataTypes;
    bool m_dataTypesIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_DataSourceParameterTypesVM_H_ */
