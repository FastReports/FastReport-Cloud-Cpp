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
 * UserSettingsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UserSettingsVM_H_
#define FASTREPORT_CLOUD_MODELS_UserSettingsVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/AuditType.h"
#include <vector>
#include "CppRestOpenAPIClient/model/ProfileVisibility.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  UserSettingsVM
    : public ModelBase
{
public:
    UserSettingsVM();
    virtual ~UserSettingsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserSettingsVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ProfileVisibility> getProfileVisibility() const;
    bool profileVisibilityIsSet() const;
    void unsetprofileVisibility();

    void setProfileVisibility(const std::shared_ptr<ProfileVisibility>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDefaultSubscription() const;
    bool defaultSubscriptionIsSet() const;
    void unsetdefaultSubscription();

    void setDefaultSubscription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isShowHiddenFilesAndFolders() const;
    bool showHiddenFilesAndFoldersIsSet() const;
    void unsetshowHiddenFilesAndFolders();

    void setShowHiddenFilesAndFolders(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getSlaAcceptedDateTime() const;
    bool slaAcceptedDateTimeIsSet() const;
    void unsetslaAcceptedDateTime();

    void setSlaAcceptedDateTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<AuditType>>& getSubscribedNotifications();
    bool subscribedNotificationsIsSet() const;
    void unsetsubscribedNotifications();

    void setSubscribedNotifications(const std::vector<std::shared_ptr<AuditType>>& value);


protected:
    std::shared_ptr<ProfileVisibility> m_profileVisibility;
    bool m_profileVisibilityIsSet;
    utility::string_t m_defaultSubscription;
    bool m_defaultSubscriptionIsSet;
    bool m_showHiddenFilesAndFolders;
    bool m_showHiddenFilesAndFoldersIsSet;
    utility::datetime m_slaAcceptedDateTime;
    bool m_slaAcceptedDateTimeIsSet;
    std::vector<std::shared_ptr<AuditType>> m_subscribedNotifications;
    bool m_subscribedNotificationsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UserSettingsVM_H_ */