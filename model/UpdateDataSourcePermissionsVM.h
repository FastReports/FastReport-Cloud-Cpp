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
 * UpdateDataSourcePermissionsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateDataSourcePermissionsVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateDataSourcePermissionsVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "DataSourcePermissions.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  UpdateDataSourcePermissionsVM
    : public ModelBase
{
public:
    UpdateDataSourcePermissionsVM();
    virtual ~UpdateDataSourcePermissionsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateDataSourcePermissionsVM members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DataSourcePermissions> getNewPermissions() const;
    bool newPermissionsIsSet() const;
    void unsetnewPermissions();

    void setNewPermissions(const std::shared_ptr<DataSourcePermissions>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAdministrate() const;
    bool administrateIsSet() const;
    void unsetadministrate();

    void setAdministrate(int32_t value);


protected:
    std::shared_ptr<DataSourcePermissions> m_newPermissions;
    bool m_newPermissionsIsSet;
    int32_t m_administrate;
    bool m_administrateIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UpdateDataSourcePermissionsVM_H_ */
