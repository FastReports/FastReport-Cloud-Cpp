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
 * DefaultPermissionsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_
#define FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/DataSourcePermissions.h"
#include "CppRestOpenAPIClient/model/GroupPermissions.h"
#include "CppRestOpenAPIClient/model/FilePermissions.h"
#include "CppRestOpenAPIClient/model/TaskPermissions.h"

namespace fastreport {
namespace cloud {
namespace models {

class FilePermissions;
class DataSourcePermissions;
class GroupPermissions;
class TaskPermissions;

/// <summary>
/// 
/// </summary>
class  DefaultPermissionsVM
    : public ModelBase
{
public:
    DefaultPermissionsVM();
    virtual ~DefaultPermissionsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DefaultPermissionsVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FilePermissions> getFilePermissions() const;
    bool filePermissionsIsSet() const;
    void unsetfilePermissions();

    void setFilePermissions(const std::shared_ptr<FilePermissions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataSourcePermissions> getDataSourcePermissions() const;
    bool dataSourcePermissionsIsSet() const;
    void unsetdataSourcePermissions();

    void setDataSourcePermissions(const std::shared_ptr<DataSourcePermissions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupPermissions> getGroupPermissions() const;
    bool groupPermissionsIsSet() const;
    void unsetgroupPermissions();

    void setGroupPermissions(const std::shared_ptr<GroupPermissions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TaskPermissions> getTaskPermissions() const;
    bool taskPermissionsIsSet() const;
    void unsettaskPermissions();

    void setTaskPermissions(const std::shared_ptr<TaskPermissions>& value);


protected:
    std::shared_ptr<FilePermissions> m_filePermissions;
    bool m_filePermissionsIsSet;
    std::shared_ptr<DataSourcePermissions> m_dataSourcePermissions;
    bool m_dataSourcePermissionsIsSet;
    std::shared_ptr<GroupPermissions> m_groupPermissions;
    bool m_groupPermissionsIsSet;
    std::shared_ptr<TaskPermissions> m_taskPermissions;
    bool m_taskPermissionsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_ */
