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
 * AdminExportFolderCreateVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AdminExportFolderCreateVM_H_
#define FASTREPORT_CLOUD_MODELS_AdminExportFolderCreateVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  AdminExportFolderCreateVM
    : public ModelBase
{
public:
    AdminExportFolderCreateVM();
    virtual ~AdminExportFolderCreateVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdminExportFolderCreateVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();

    void setParentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();

    void setOwnerId(const utility::string_t& value);

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
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsettags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIcon() const;
    bool iconIsSet() const;
    void unseticon();

    void setIcon(const utility::string_t& value);


protected:
    utility::string_t m_parentId;
    bool m_parentIdIsSet;
    utility::string_t m_ownerId;
    bool m_ownerIdIsSet;
    utility::string_t m_name;
    bool m_nameIsSet;
    std::vector<utility::string_t> m_tags;
    bool m_tagsIsSet;
    utility::string_t m_icon;
    bool m_iconIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AdminExportFolderCreateVM_H_ */
