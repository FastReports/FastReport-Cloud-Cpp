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
 * UserResultVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UserResultVM_H_
#define FASTREPORT_CLOUD_MODELS_UserResultVM_H_


#include "CppRestOpenAPIClient/model/UserSettingsVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/AdminPermission.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class AdminPermission;
class UserSettingsVM;

/// <summary>
/// 
/// </summary>
class  UserResultVM
    : public CloudBaseVM
{
public:
    UserResultVM();
    virtual ~UserResultVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserResultVM members

    /// <summary>
    /// 
    /// </summary>
    bool isIsAuthenticated() const;
    bool isAuthenticatedIsSet() const;
    void unsetisAuthenticated();

    void setIsAuthenticated(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetid();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsAdmin() const;
    bool isAdminIsSet() const;
    void unsetisAdmin();

    void setIsAdmin(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminPermission> getAdminPermission() const;
    bool adminPermissionIsSet() const;
    void unsetadminPermission();

    void setAdminPermission(const std::shared_ptr<AdminPermission>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();

    void setSubscriptions(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();

    void setGroups(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();

    void setProvider(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetemail();

    void setEmail(const utility::string_t& value);

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
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();

    void setUsername(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserSettingsVM> getSettings() const;
    bool settingsIsSet() const;
    void unsetsettings();

    void setSettings(const std::shared_ptr<UserSettingsVM>& value);


protected:
    bool m_isAuthenticated;
    bool m_isAuthenticatedIsSet;
    utility::string_t m_id;
    bool m_idIsSet;
    bool m_isAdmin;
    bool m_isAdminIsSet;
    std::shared_ptr<AdminPermission> m_adminPermission;
    bool m_adminPermissionIsSet;
    std::vector<utility::string_t> m_subscriptions;
    bool m_subscriptionsIsSet;
    std::vector<utility::string_t> m_groups;
    bool m_groupsIsSet;
    utility::string_t m_provider;
    bool m_providerIsSet;
    utility::string_t m_email;
    bool m_emailIsSet;
    utility::string_t m_name;
    bool m_nameIsSet;
    utility::string_t m_username;
    bool m_usernameIsSet;
    std::shared_ptr<UserSettingsVM> m_settings;
    bool m_settingsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UserResultVM_H_ */
