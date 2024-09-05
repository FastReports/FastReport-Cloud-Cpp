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
 * UpdateSubscriptionPermissionsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateSubscriptionPermissionsVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateSubscriptionPermissionsVM_H_


#include "CppRestOpenAPIClient/model/SubscriptionAdministrate.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/SubscriptionPermissionsCRUDVM.h"

namespace fastreport {
namespace cloud {
namespace models {

class SubscriptionPermissionsCRUDVM;

/// <summary>
/// 
/// </summary>
class  UpdateSubscriptionPermissionsVM
    : public CloudBaseVM
{
public:
    UpdateSubscriptionPermissionsVM();
    virtual ~UpdateSubscriptionPermissionsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateSubscriptionPermissionsVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionPermissionsCRUDVM> getNewPermissions() const;
    bool newPermissionsIsSet() const;
    void unsetnewPermissions();

    void setNewPermissions(const std::shared_ptr<SubscriptionPermissionsCRUDVM>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionAdministrate> getAdministrate() const;
    bool administrateIsSet() const;
    void unsetadministrate();

    void setAdministrate(const std::shared_ptr<SubscriptionAdministrate>& value);


protected:
    std::shared_ptr<SubscriptionPermissionsCRUDVM> m_newPermissions;
    bool m_newPermissionsIsSet;
    std::shared_ptr<SubscriptionAdministrate> m_administrate;
    bool m_administrateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UpdateSubscriptionPermissionsVM_H_ */
