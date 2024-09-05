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
 * UpdateSubscriptionVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateSubscriptionVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateSubscriptionVM_H_


#include "CppRestOpenAPIClient/model/DefaultPermissionsVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class DefaultPermissionsVM;

/// <summary>
/// 
/// </summary>
class  UpdateSubscriptionVM
    : public CloudBaseVM
{
public:
    UpdateSubscriptionVM();
    virtual ~UpdateSubscriptionVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateSubscriptionVM members

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
    utility::string_t getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();

    void setLocale(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsettags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DefaultPermissionsVM> getDefaultPermissions() const;
    bool defaultPermissionsIsSet() const;
    void unsetdefaultPermissions();

    void setDefaultPermissions(const std::shared_ptr<DefaultPermissionsVM>& value);


protected:
    utility::string_t m_name;
    bool m_nameIsSet;
    utility::string_t m_locale;
    bool m_localeIsSet;
    std::vector<utility::string_t> m_tags;
    bool m_tagsIsSet;
    std::shared_ptr<DefaultPermissionsVM> m_defaultPermissions;
    bool m_defaultPermissionsIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UpdateSubscriptionVM_H_ */