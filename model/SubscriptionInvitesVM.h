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
 * SubscriptionInvitesVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionInvitesVM_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionInvitesVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "SubscriptionInviteVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  SubscriptionInvitesVM
    : public ModelBase
{
public:
    SubscriptionInvitesVM();
    virtual ~SubscriptionInvitesVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionInvitesVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SubscriptionInviteVM>>& getInvites();
    bool invitesIsSet() const;
    void unsetinvites();

    void setInvites(const std::vector<std::shared_ptr<SubscriptionInviteVM>>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();

    void setCount(int64_t value);


protected:
    std::vector<std::shared_ptr<SubscriptionInviteVM>> m_invites;
    bool m_invitesIsSet;
    int64_t m_count;
    bool m_countIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionInvitesVM_H_ */