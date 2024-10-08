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
 * DefaultPermissionsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_
#define FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_


#include "CppRestOpenAPIClient/model/GroupPermissionsCRUDVM.h"
#include "CppRestOpenAPIClient/model/DataSourcePermissionsCRUDVM.h"
#include "CppRestOpenAPIClient/model/FilePermissionsCRUDVM.h"
#include "CppRestOpenAPIClient/model/TaskPermissionsCRUDVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {

class FilePermissionsCRUDVM;
class DataSourcePermissionsCRUDVM;
class GroupPermissionsCRUDVM;
class TaskPermissionsCRUDVM;

/// <summary>
/// 
/// </summary>
class  DefaultPermissionsVM
    : public CloudBaseVM
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
    std::shared_ptr<FilePermissionsCRUDVM> getFilePermissions() const;
    bool filePermissionsIsSet() const;
    void unsetfilePermissions();

    void setFilePermissions(const std::shared_ptr<FilePermissionsCRUDVM>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataSourcePermissionsCRUDVM> getDataSourcePermissions() const;
    bool dataSourcePermissionsIsSet() const;
    void unsetdataSourcePermissions();

    void setDataSourcePermissions(const std::shared_ptr<DataSourcePermissionsCRUDVM>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupPermissionsCRUDVM> getGroupPermissions() const;
    bool groupPermissionsIsSet() const;
    void unsetgroupPermissions();

    void setGroupPermissions(const std::shared_ptr<GroupPermissionsCRUDVM>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TaskPermissionsCRUDVM> getTaskPermissions() const;
    bool taskPermissionsIsSet() const;
    void unsettaskPermissions();

    void setTaskPermissions(const std::shared_ptr<TaskPermissionsCRUDVM>& value);


protected:
    std::shared_ptr<FilePermissionsCRUDVM> m_filePermissions;
    bool m_filePermissionsIsSet;
    std::shared_ptr<DataSourcePermissionsCRUDVM> m_dataSourcePermissions;
    bool m_dataSourcePermissionsIsSet;
    std::shared_ptr<GroupPermissionsCRUDVM> m_groupPermissions;
    bool m_groupPermissionsIsSet;
    std::shared_ptr<TaskPermissionsCRUDVM> m_taskPermissions;
    bool m_taskPermissionsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_DefaultPermissionsVM_H_ */
