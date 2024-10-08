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
 * DataSourcesVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_DataSourcesVM_H_
#define FASTREPORT_CLOUD_MODELS_DataSourcesVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include <vector>
#include "CppRestOpenAPIClient/model/DataSourceVM.h"

namespace fastreport {
namespace cloud {
namespace models {

class DataSourceVM;

/// <summary>
/// 
/// </summary>
class  DataSourcesVM
    : public CloudBaseVM
{
public:
    DataSourcesVM();
    virtual ~DataSourcesVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataSourcesVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataSourceVM>>& getDataSources();
    bool dataSourcesIsSet() const;
    void unsetdataSources();

    void setDataSources(const std::vector<std::shared_ptr<DataSourceVM>>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();

    void setCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSkip() const;
    bool skipIsSet() const;
    void unsetskip();

    void setSkip(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTake() const;
    bool takeIsSet() const;
    void unsettake();

    void setTake(int32_t value);


protected:
    std::vector<std::shared_ptr<DataSourceVM>> m_dataSources;
    bool m_dataSourcesIsSet;
    int64_t m_count;
    bool m_countIsSet;
    int32_t m_skip;
    bool m_skipIsSet;
    int32_t m_take;
    bool m_takeIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_DataSourcesVM_H_ */
