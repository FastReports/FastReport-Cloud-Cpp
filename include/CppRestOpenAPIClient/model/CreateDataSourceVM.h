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
 * CreateDataSourceVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CreateDataSourceVM_H_
#define FASTREPORT_CLOUD_MODELS_CreateDataSourceVM_H_


#include "CppRestOpenAPIClient/model/DataSourceSelectCommandVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/DataSourceConnectionType.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class DataSourceSelectCommandVM;

/// <summary>
/// 
/// </summary>
class  CreateDataSourceVM
    : public CloudBaseVM
{
public:
    CreateDataSourceVM();
    virtual ~CreateDataSourceVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateDataSourceVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetname();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectionString() const;
    bool connectionStringIsSet() const;
    void unsetconnectionString();

    void setConnectionString(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();

    void setSubscriptionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataSourceConnectionType> getConnectionType() const;
    bool connectionTypeIsSet() const;
    void unsetconnectionType();

    void setConnectionType(const std::shared_ptr<DataSourceConnectionType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& getSelectCommands();
    bool selectCommandsIsSet() const;
    void unsetselectCommands();

    void setSelectCommands(const std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& value);


protected:
    utility::string_t m_name;
    bool m_nameIsSet;
    utility::string_t m_connectionString;
    bool m_connectionStringIsSet;
    utility::string_t m_subscriptionId;
    bool m_subscriptionIdIsSet;
    std::shared_ptr<DataSourceConnectionType> m_connectionType;
    bool m_connectionTypeIsSet;
    std::vector<std::shared_ptr<DataSourceSelectCommandVM>> m_selectCommands;
    bool m_selectCommandsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CreateDataSourceVM_H_ */
