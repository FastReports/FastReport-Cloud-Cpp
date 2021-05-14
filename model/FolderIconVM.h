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
 * FolderIconVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_FolderIconVM_H_
#define FASTREPORT_CLOUD_MODELS_FolderIconVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  FolderIconVM
    : public ModelBase
{
public:
    FolderIconVM();
    virtual ~FolderIconVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FolderIconVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIcon() const;
    bool iconIsSet() const;
    void unseticon();

    void setIcon(const utility::string_t& value);


protected:
    utility::string_t m_icon;
    bool m_iconIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_FolderIconVM_H_ */
