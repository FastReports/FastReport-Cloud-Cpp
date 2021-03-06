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
 * ReportsVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_ReportsVM_H_
#define FASTREPORT_CLOUD_MODELS_ReportsVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "ReportVM.h"
#include <vector>
#include "ReportVMFilesVMBase.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  ReportsVM
    : public ModelBase
{
public:
    ReportsVM();
    virtual ~ReportsVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReportsVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ReportVM>>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();

    void setFiles(const std::vector<std::shared_ptr<ReportVM>>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();

    void setCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSkip() const;
    bool skipIsSet() const;
    void unsetskip();

    void setSkip(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTake() const;
    bool takeIsSet() const;
    void unsettake();

    void setTake(int32_t value);


protected:
    std::vector<std::shared_ptr<ReportVM>> m_files;
    bool m_filesIsSet;
    int64_t m_count;
    bool m_countIsSet;
    int32_t m_skip;
    bool m_skipIsSet;
    int32_t m_take;
    bool m_takeIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_ReportsVM_H_ */
