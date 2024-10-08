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
 * GroupPermissionCRUDVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_GroupPermissionCRUDVM_H_
#define FASTREPORT_CLOUD_MODELS_GroupPermissionCRUDVM_H_


#include "CppRestOpenAPIClient/model/GroupAdministrate.h"
#include "CppRestOpenAPIClient/model/GroupDelete.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/GroupUpdate.h"
#include "CppRestOpenAPIClient/model/GroupExecute.h"
#include "CppRestOpenAPIClient/model/GroupGet.h"
#include "CppRestOpenAPIClient/model/GroupCreate.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  GroupPermissionCRUDVM
    : public CloudBaseVM
{
public:
    GroupPermissionCRUDVM();
    virtual ~GroupPermissionCRUDVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GroupPermissionCRUDVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupCreate> getCreate() const;
    bool createIsSet() const;
    void unsetcreate();

    void setCreate(const std::shared_ptr<GroupCreate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupDelete> getRDelete() const;
    bool rDeleteIsSet() const;
    void unsetr_delete();

    void setRDelete(const std::shared_ptr<GroupDelete>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupExecute> getExecute() const;
    bool executeIsSet() const;
    void unsetexecute();

    void setExecute(const std::shared_ptr<GroupExecute>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupGet> getGet() const;
    bool getIsSet() const;
    void unsetget();

    void setGet(const std::shared_ptr<GroupGet>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupUpdate> getUpdate() const;
    bool updateIsSet() const;
    void unsetupdate();

    void setUpdate(const std::shared_ptr<GroupUpdate>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupAdministrate> getAdministrate() const;
    bool administrateIsSet() const;
    void unsetadministrate();

    void setAdministrate(const std::shared_ptr<GroupAdministrate>& value);


protected:
    std::shared_ptr<GroupCreate> m_create;
    bool m_createIsSet;
    std::shared_ptr<GroupDelete> m_r_delete;
    bool m_r_deleteIsSet;
    std::shared_ptr<GroupExecute> m_execute;
    bool m_executeIsSet;
    std::shared_ptr<GroupGet> m_get;
    bool m_getIsSet;
    std::shared_ptr<GroupUpdate> m_update;
    bool m_updateIsSet;
    std::shared_ptr<GroupAdministrate> m_administrate;
    bool m_administrateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_GroupPermissionCRUDVM_H_ */
