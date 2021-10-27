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
 * SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "SubscriptionUpdate.h"
#include "SubscriptionDelete.h"
#include "SubscriptionExecute.h"
#include "SubscriptionAdministrate.h"
#include "SubscriptionCreate.h"
#include "SubscriptionGet.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission
    : public ModelBase
{
public:
    SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission();
    virtual ~SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionCreate> getCreate() const;
    bool createIsSet() const;
    void unsetcreate();

    void setCreate(const std::shared_ptr<SubscriptionCreate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionDelete> getRDelete() const;
    bool rDeleteIsSet() const;
    void unsetr_delete();

    void setRDelete(const std::shared_ptr<SubscriptionDelete>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionExecute> getExecute() const;
    bool executeIsSet() const;
    void unsetexecute();

    void setExecute(const std::shared_ptr<SubscriptionExecute>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionGet> getGet() const;
    bool getIsSet() const;
    void unsetget();

    void setGet(const std::shared_ptr<SubscriptionGet>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionUpdate> getUpdate() const;
    bool updateIsSet() const;
    void unsetupdate();

    void setUpdate(const std::shared_ptr<SubscriptionUpdate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SubscriptionAdministrate> getAdministrate() const;
    bool administrateIsSet() const;
    void unsetadministrate();

    void setAdministrate(const std::shared_ptr<SubscriptionAdministrate>& value);


protected:
    std::shared_ptr<SubscriptionCreate> m_create;
    bool m_createIsSet;
    std::shared_ptr<SubscriptionDelete> m_r_delete;
    bool m_r_deleteIsSet;
    std::shared_ptr<SubscriptionExecute> m_execute;
    bool m_executeIsSet;
    std::shared_ptr<SubscriptionGet> m_get;
    bool m_getIsSet;
    std::shared_ptr<SubscriptionUpdate> m_update;
    bool m_updateIsSet;
    std::shared_ptr<SubscriptionAdministrate> m_administrate;
    bool m_administrateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionCreateSubscriptionGetSubscriptionUpdateSubscriptionDeleteSubscriptionExecuteSubscriptionAdministratePermission_H_ */