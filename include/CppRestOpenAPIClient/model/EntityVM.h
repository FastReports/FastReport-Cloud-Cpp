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
 * EntityVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_EntityVM_H_
#define FASTREPORT_CLOUD_MODELS_EntityVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  EntityVM
    : public ModelBase
{
public:
    EntityVM();
    virtual ~EntityVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EntityVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetid();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();

    void setCreatedTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatorUserId() const;
    bool creatorUserIdIsSet() const;
    void unsetcreatorUserId();

    void setCreatorUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getEditedTime() const;
    bool editedTimeIsSet() const;
    void unseteditedTime();

    void setEditedTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEditorUserId() const;
    bool editorUserIdIsSet() const;
    void unseteditorUserId();

    void setEditorUserId(const utility::string_t& value);


protected:
    utility::string_t m_id;
    bool m_idIsSet;
    utility::datetime m_createdTime;
    bool m_createdTimeIsSet;
    utility::string_t m_creatorUserId;
    bool m_creatorUserIdIsSet;
    utility::datetime m_editedTime;
    bool m_editedTimeIsSet;
    utility::string_t m_editorUserId;
    bool m_editorUserIdIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_EntityVM_H_ */