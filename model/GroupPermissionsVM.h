/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GroupPermissionsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_GroupPermissionsVM_H_
#define FASTREPORT_CLOUD_MODELS_GroupPermissionsVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "GroupPermissions.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  GroupPermissionsVM
    : public ModelBase
{
public:
    GroupPermissionsVM();
    virtual ~GroupPermissionsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GroupPermissionsVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupPermissions> getPermissions() const;
    bool permissionsIsSet() const;
    void unsetpermissions();

    void setPermissions(const std::shared_ptr<GroupPermissions>& value);


protected:
    std::shared_ptr<GroupPermissions> m_permissions;
    bool m_permissionsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_GroupPermissionsVM_H_ */