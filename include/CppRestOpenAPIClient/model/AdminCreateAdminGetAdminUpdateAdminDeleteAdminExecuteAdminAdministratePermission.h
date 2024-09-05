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
 * AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission_H_
#define FASTREPORT_CLOUD_MODELS_AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AdminGet.h"
#include "CppRestOpenAPIClient/model/AdminExecute.h"
#include "CppRestOpenAPIClient/model/AdminAdministrate.h"
#include "CppRestOpenAPIClient/model/AdminDelete.h"
#include "CppRestOpenAPIClient/model/AdminCreate.h"
#include "CppRestOpenAPIClient/model/AdminUpdate.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission
    : public ModelBase
{
public:
    AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission();
    virtual ~AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminCreate> getCreate() const;
    bool createIsSet() const;
    void unsetcreate();

    void setCreate(const std::shared_ptr<AdminCreate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminDelete> getRDelete() const;
    bool rDeleteIsSet() const;
    void unsetr_delete();

    void setRDelete(const std::shared_ptr<AdminDelete>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminExecute> getExecute() const;
    bool executeIsSet() const;
    void unsetexecute();

    void setExecute(const std::shared_ptr<AdminExecute>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminGet> getGet() const;
    bool getIsSet() const;
    void unsetget();

    void setGet(const std::shared_ptr<AdminGet>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminUpdate> getUpdate() const;
    bool updateIsSet() const;
    void unsetupdate();

    void setUpdate(const std::shared_ptr<AdminUpdate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdminAdministrate> getAdministrate() const;
    bool administrateIsSet() const;
    void unsetadministrate();

    void setAdministrate(const std::shared_ptr<AdminAdministrate>& value);


protected:
    std::shared_ptr<AdminCreate> m_create;
    bool m_createIsSet;
    std::shared_ptr<AdminDelete> m_r_delete;
    bool m_r_deleteIsSet;
    std::shared_ptr<AdminExecute> m_execute;
    bool m_executeIsSet;
    std::shared_ptr<AdminGet> m_get;
    bool m_getIsSet;
    std::shared_ptr<AdminUpdate> m_update;
    bool m_updateIsSet;
    std::shared_ptr<AdminAdministrate> m_administrate;
    bool m_administrateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AdminCreateAdminGetAdminUpdateAdminDeleteAdminExecuteAdminAdministratePermission_H_ */