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
 * FileShareVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_FileShareVM_H_
#define FASTREPORT_CLOUD_MODELS_FileShareVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/FilePermissionCRUDVM.h"

namespace fastreport {
namespace cloud {
namespace models {

class FilePermissionCRUDVM;

/// <summary>
/// 
/// </summary>
class  FileShareVM
    : public ModelBase
{
public:
    FileShareVM();
    virtual ~FileShareVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FileShareVM members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpires() const;
    bool expiresIsSet() const;
    void unsetexpires();

    void setExpires(const utility::datetime& value);

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
    std::shared_ptr<FilePermissionCRUDVM> getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();

    void setPermission(const std::shared_ptr<FilePermissionCRUDVM>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKey() const;
    bool keyIsSet() const;
    void unsetkey();

    void setKey(const utility::string_t& value);


protected:
    utility::datetime m_expires;
    bool m_expiresIsSet;
    utility::string_t m_name;
    bool m_nameIsSet;
    std::shared_ptr<FilePermissionCRUDVM> m_permission;
    bool m_permissionIsSet;
    utility::string_t m_key;
    bool m_keyIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_FileShareVM_H_ */
