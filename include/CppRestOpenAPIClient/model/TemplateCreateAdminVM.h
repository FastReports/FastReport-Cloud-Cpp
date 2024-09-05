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
 * TemplateCreateAdminVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TemplateCreateAdminVM_H_
#define FASTREPORT_CLOUD_MODELS_TemplateCreateAdminVM_H_


#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/TemplateCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  TemplateCreateAdminVM
    : public TemplateCreateVM
{
public:
    TemplateCreateAdminVM();
    virtual ~TemplateCreateAdminVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TemplateCreateAdminVM members

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
    utility::string_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();

    void setParentId(const utility::string_t& value);


protected:
    utility::string_t m_ownerId;
    bool m_ownerIdIsSet;
    utility::string_t m_parentId;
    bool m_parentIdIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TemplateCreateAdminVM_H_ */
