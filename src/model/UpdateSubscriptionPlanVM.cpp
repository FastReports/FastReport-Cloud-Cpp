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



#include "CppRestOpenAPIClient/model/UpdateSubscriptionPlanVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateSubscriptionPlanVM::UpdateSubscriptionPlanVM()
{
    m_isActive = false;
    m_isActiveIsSet = false;
    m_displayName = utility::conversions::to_string_t("");
    m_displayNameIsSet = false;
    m_timePeriodTypeIsSet = false;
    m_timePeriod = 0;
    m_timePeriodIsSet = false;
    m_templatesSpaceLimit = 0L;
    m_templatesSpaceLimitIsSet = false;
    m_reportsSpaceLimit = 0L;
    m_reportsSpaceLimitIsSet = false;
    m_exportsSpaceLimit = 0L;
    m_exportsSpaceLimitIsSet = false;
    m_fileUploadSizeLimit = 0L;
    m_fileUploadSizeLimitIsSet = false;
    m_dataSourceLimit = 0;
    m_dataSourceLimitIsSet = false;
    m_maxUsersCount = 0;
    m_maxUsersCountIsSet = false;
    m_groupLimit = 0;
    m_groupLimitIsSet = false;
    m_onlineDesigner = false;
    m_onlineDesignerIsSet = false;
    m_isDemo = false;
    m_isDemoIsSet = false;
    m_urlToBuy = utility::conversions::to_string_t("");
    m_urlToBuyIsSet = false;
    m_unlimitedPage = false;
    m_unlimitedPageIsSet = false;
    m_pageLimit = 0;
    m_pageLimitIsSet = false;
    m_readonlyTimeLimitTypeIsSet = false;
    m_readonlyTimeLimit = 0;
    m_readonlyTimeLimitIsSet = false;
    m_tasksIsSet = false;
}

UpdateSubscriptionPlanVM::~UpdateSubscriptionPlanVM()
{
}

void UpdateSubscriptionPlanVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateSubscriptionPlanVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_isActiveIsSet)
    {
        val[utility::conversions::to_string_t(U("isActive"))] = ModelBase::toJson(m_isActive);
    }
    if(m_displayNameIsSet)
    {
        val[utility::conversions::to_string_t(U("displayName"))] = ModelBase::toJson(m_displayName);
    }
    if(m_timePeriodTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("timePeriodType"))] = ModelBase::toJson(m_timePeriodType);
    }
    if(m_timePeriodIsSet)
    {
        val[utility::conversions::to_string_t(U("timePeriod"))] = ModelBase::toJson(m_timePeriod);
    }
    if(m_templatesSpaceLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("templatesSpaceLimit"))] = ModelBase::toJson(m_templatesSpaceLimit);
    }
    if(m_reportsSpaceLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("reportsSpaceLimit"))] = ModelBase::toJson(m_reportsSpaceLimit);
    }
    if(m_exportsSpaceLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("exportsSpaceLimit"))] = ModelBase::toJson(m_exportsSpaceLimit);
    }
    if(m_fileUploadSizeLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("fileUploadSizeLimit"))] = ModelBase::toJson(m_fileUploadSizeLimit);
    }
    if(m_dataSourceLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("dataSourceLimit"))] = ModelBase::toJson(m_dataSourceLimit);
    }
    if(m_maxUsersCountIsSet)
    {
        val[utility::conversions::to_string_t(U("maxUsersCount"))] = ModelBase::toJson(m_maxUsersCount);
    }
    if(m_groupLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("groupLimit"))] = ModelBase::toJson(m_groupLimit);
    }
    if(m_onlineDesignerIsSet)
    {
        val[utility::conversions::to_string_t(U("onlineDesigner"))] = ModelBase::toJson(m_onlineDesigner);
    }
    if(m_isDemoIsSet)
    {
        val[utility::conversions::to_string_t(U("isDemo"))] = ModelBase::toJson(m_isDemo);
    }
    if(m_urlToBuyIsSet)
    {
        val[utility::conversions::to_string_t(U("urlToBuy"))] = ModelBase::toJson(m_urlToBuy);
    }
    if(m_unlimitedPageIsSet)
    {
        val[utility::conversions::to_string_t(U("unlimitedPage"))] = ModelBase::toJson(m_unlimitedPage);
    }
    if(m_pageLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("pageLimit"))] = ModelBase::toJson(m_pageLimit);
    }
    if(m_readonlyTimeLimitTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("readonlyTimeLimitType"))] = ModelBase::toJson(m_readonlyTimeLimitType);
    }
    if(m_readonlyTimeLimitIsSet)
    {
        val[utility::conversions::to_string_t(U("readonlyTimeLimit"))] = ModelBase::toJson(m_readonlyTimeLimit);
    }
    if(m_tasksIsSet)
    {
        val[utility::conversions::to_string_t(U("tasks"))] = ModelBase::toJson(m_tasks);
    }

    return val;
}

bool UpdateSubscriptionPlanVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("isActive"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isActive")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsActive;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsActive);
            setIsActive(refVal_setIsActive);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("displayName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("displayName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDisplayName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDisplayName);
            setDisplayName(refVal_setDisplayName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timePeriodType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timePeriodType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TimePeriodType> refVal_setTimePeriodType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimePeriodType);
            setTimePeriodType(refVal_setTimePeriodType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timePeriod"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timePeriod")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTimePeriod;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimePeriod);
            setTimePeriod(refVal_setTimePeriod);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templatesSpaceLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templatesSpaceLimit")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setTemplatesSpaceLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplatesSpaceLimit);
            setTemplatesSpaceLimit(refVal_setTemplatesSpaceLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reportsSpaceLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reportsSpaceLimit")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setReportsSpaceLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportsSpaceLimit);
            setReportsSpaceLimit(refVal_setReportsSpaceLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exportsSpaceLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exportsSpaceLimit")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setExportsSpaceLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExportsSpaceLimit);
            setExportsSpaceLimit(refVal_setExportsSpaceLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fileUploadSizeLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fileUploadSizeLimit")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setFileUploadSizeLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFileUploadSizeLimit);
            setFileUploadSizeLimit(refVal_setFileUploadSizeLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dataSourceLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataSourceLimit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setDataSourceLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataSourceLimit);
            setDataSourceLimit(refVal_setDataSourceLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxUsersCount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxUsersCount")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMaxUsersCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxUsersCount);
            setMaxUsersCount(refVal_setMaxUsersCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groupLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groupLimit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setGroupLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroupLimit);
            setGroupLimit(refVal_setGroupLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("onlineDesigner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("onlineDesigner")));
        if(!fieldValue.is_null())
        {
            bool refVal_setOnlineDesigner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOnlineDesigner);
            setOnlineDesigner(refVal_setOnlineDesigner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isDemo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isDemo")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsDemo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsDemo);
            setIsDemo(refVal_setIsDemo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("urlToBuy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("urlToBuy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrlToBuy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrlToBuy);
            setUrlToBuy(refVal_setUrlToBuy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unlimitedPage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unlimitedPage")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUnlimitedPage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnlimitedPage);
            setUnlimitedPage(refVal_setUnlimitedPage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pageLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pageLimit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPageLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPageLimit);
            setPageLimit(refVal_setPageLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("readonlyTimeLimitType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("readonlyTimeLimitType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TimePeriodType> refVal_setReadonlyTimeLimitType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReadonlyTimeLimitType);
            setReadonlyTimeLimitType(refVal_setReadonlyTimeLimitType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("readonlyTimeLimit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("readonlyTimeLimit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setReadonlyTimeLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReadonlyTimeLimit);
            setReadonlyTimeLimit(refVal_setReadonlyTimeLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tasks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tasks")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskSettingsVM> refVal_setTasks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTasks);
            setTasks(refVal_setTasks);
        }
    }
    return ok;
}

void UpdateSubscriptionPlanVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_isActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isActive")), m_isActive));
    }
    if(m_displayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("displayName")), m_displayName));
    }
    if(m_timePeriodTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timePeriodType")), m_timePeriodType));
    }
    if(m_timePeriodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timePeriod")), m_timePeriod));
    }
    if(m_templatesSpaceLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templatesSpaceLimit")), m_templatesSpaceLimit));
    }
    if(m_reportsSpaceLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportsSpaceLimit")), m_reportsSpaceLimit));
    }
    if(m_exportsSpaceLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exportsSpaceLimit")), m_exportsSpaceLimit));
    }
    if(m_fileUploadSizeLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fileUploadSizeLimit")), m_fileUploadSizeLimit));
    }
    if(m_dataSourceLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataSourceLimit")), m_dataSourceLimit));
    }
    if(m_maxUsersCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxUsersCount")), m_maxUsersCount));
    }
    if(m_groupLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groupLimit")), m_groupLimit));
    }
    if(m_onlineDesignerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("onlineDesigner")), m_onlineDesigner));
    }
    if(m_isDemoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isDemo")), m_isDemo));
    }
    if(m_urlToBuyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("urlToBuy")), m_urlToBuy));
    }
    if(m_unlimitedPageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unlimitedPage")), m_unlimitedPage));
    }
    if(m_pageLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pageLimit")), m_pageLimit));
    }
    if(m_readonlyTimeLimitTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("readonlyTimeLimitType")), m_readonlyTimeLimitType));
    }
    if(m_readonlyTimeLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("readonlyTimeLimit")), m_readonlyTimeLimit));
    }
    if(m_tasksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tasks")), m_tasks));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool UpdateSubscriptionPlanVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("isActive"))))
    {
        bool refVal_setIsActive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isActive"))), refVal_setIsActive );
        setIsActive(refVal_setIsActive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("displayName"))))
    {
        utility::string_t refVal_setDisplayName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("displayName"))), refVal_setDisplayName );
        setDisplayName(refVal_setDisplayName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timePeriodType"))))
    {
        std::shared_ptr<TimePeriodType> refVal_setTimePeriodType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timePeriodType"))), refVal_setTimePeriodType );
        setTimePeriodType(refVal_setTimePeriodType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timePeriod"))))
    {
        int32_t refVal_setTimePeriod;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timePeriod"))), refVal_setTimePeriod );
        setTimePeriod(refVal_setTimePeriod);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templatesSpaceLimit"))))
    {
        int64_t refVal_setTemplatesSpaceLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templatesSpaceLimit"))), refVal_setTemplatesSpaceLimit );
        setTemplatesSpaceLimit(refVal_setTemplatesSpaceLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportsSpaceLimit"))))
    {
        int64_t refVal_setReportsSpaceLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportsSpaceLimit"))), refVal_setReportsSpaceLimit );
        setReportsSpaceLimit(refVal_setReportsSpaceLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exportsSpaceLimit"))))
    {
        int64_t refVal_setExportsSpaceLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exportsSpaceLimit"))), refVal_setExportsSpaceLimit );
        setExportsSpaceLimit(refVal_setExportsSpaceLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fileUploadSizeLimit"))))
    {
        int64_t refVal_setFileUploadSizeLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fileUploadSizeLimit"))), refVal_setFileUploadSizeLimit );
        setFileUploadSizeLimit(refVal_setFileUploadSizeLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataSourceLimit"))))
    {
        int32_t refVal_setDataSourceLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataSourceLimit"))), refVal_setDataSourceLimit );
        setDataSourceLimit(refVal_setDataSourceLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxUsersCount"))))
    {
        int32_t refVal_setMaxUsersCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxUsersCount"))), refVal_setMaxUsersCount );
        setMaxUsersCount(refVal_setMaxUsersCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groupLimit"))))
    {
        int32_t refVal_setGroupLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groupLimit"))), refVal_setGroupLimit );
        setGroupLimit(refVal_setGroupLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("onlineDesigner"))))
    {
        bool refVal_setOnlineDesigner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("onlineDesigner"))), refVal_setOnlineDesigner );
        setOnlineDesigner(refVal_setOnlineDesigner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isDemo"))))
    {
        bool refVal_setIsDemo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isDemo"))), refVal_setIsDemo );
        setIsDemo(refVal_setIsDemo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("urlToBuy"))))
    {
        utility::string_t refVal_setUrlToBuy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("urlToBuy"))), refVal_setUrlToBuy );
        setUrlToBuy(refVal_setUrlToBuy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unlimitedPage"))))
    {
        bool refVal_setUnlimitedPage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unlimitedPage"))), refVal_setUnlimitedPage );
        setUnlimitedPage(refVal_setUnlimitedPage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pageLimit"))))
    {
        int32_t refVal_setPageLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pageLimit"))), refVal_setPageLimit );
        setPageLimit(refVal_setPageLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("readonlyTimeLimitType"))))
    {
        std::shared_ptr<TimePeriodType> refVal_setReadonlyTimeLimitType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("readonlyTimeLimitType"))), refVal_setReadonlyTimeLimitType );
        setReadonlyTimeLimitType(refVal_setReadonlyTimeLimitType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("readonlyTimeLimit"))))
    {
        int32_t refVal_setReadonlyTimeLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("readonlyTimeLimit"))), refVal_setReadonlyTimeLimit );
        setReadonlyTimeLimit(refVal_setReadonlyTimeLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tasks"))))
    {
        std::shared_ptr<TaskSettingsVM> refVal_setTasks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tasks"))), refVal_setTasks );
        setTasks(refVal_setTasks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

bool UpdateSubscriptionPlanVM::isIsActive() const
{
    return m_isActive;
}

void UpdateSubscriptionPlanVM::setIsActive(bool value)
{
    m_isActive = value;
    m_isActiveIsSet = true;
}

bool UpdateSubscriptionPlanVM::isActiveIsSet() const
{
    return m_isActiveIsSet;
}

void UpdateSubscriptionPlanVM::unsetisActive()
{
    m_isActiveIsSet = false;
}
utility::string_t UpdateSubscriptionPlanVM::getDisplayName() const
{
    return m_displayName;
}

void UpdateSubscriptionPlanVM::setDisplayName(const utility::string_t& value)
{
    m_displayName = value;
    m_displayNameIsSet = true;
}

bool UpdateSubscriptionPlanVM::displayNameIsSet() const
{
    return m_displayNameIsSet;
}

void UpdateSubscriptionPlanVM::unsetdisplayName()
{
    m_displayNameIsSet = false;
}
std::shared_ptr<TimePeriodType> UpdateSubscriptionPlanVM::getTimePeriodType() const
{
    return m_timePeriodType;
}

void UpdateSubscriptionPlanVM::setTimePeriodType(const std::shared_ptr<TimePeriodType>& value)
{
    m_timePeriodType = value;
    m_timePeriodTypeIsSet = true;
}

bool UpdateSubscriptionPlanVM::timePeriodTypeIsSet() const
{
    return m_timePeriodTypeIsSet;
}

void UpdateSubscriptionPlanVM::unsettimePeriodType()
{
    m_timePeriodTypeIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getTimePeriod() const
{
    return m_timePeriod;
}

void UpdateSubscriptionPlanVM::setTimePeriod(int32_t value)
{
    m_timePeriod = value;
    m_timePeriodIsSet = true;
}

bool UpdateSubscriptionPlanVM::timePeriodIsSet() const
{
    return m_timePeriodIsSet;
}

void UpdateSubscriptionPlanVM::unsettimePeriod()
{
    m_timePeriodIsSet = false;
}
int64_t UpdateSubscriptionPlanVM::getTemplatesSpaceLimit() const
{
    return m_templatesSpaceLimit;
}

void UpdateSubscriptionPlanVM::setTemplatesSpaceLimit(int64_t value)
{
    m_templatesSpaceLimit = value;
    m_templatesSpaceLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::templatesSpaceLimitIsSet() const
{
    return m_templatesSpaceLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsettemplatesSpaceLimit()
{
    m_templatesSpaceLimitIsSet = false;
}
int64_t UpdateSubscriptionPlanVM::getReportsSpaceLimit() const
{
    return m_reportsSpaceLimit;
}

void UpdateSubscriptionPlanVM::setReportsSpaceLimit(int64_t value)
{
    m_reportsSpaceLimit = value;
    m_reportsSpaceLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::reportsSpaceLimitIsSet() const
{
    return m_reportsSpaceLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetreportsSpaceLimit()
{
    m_reportsSpaceLimitIsSet = false;
}
int64_t UpdateSubscriptionPlanVM::getExportsSpaceLimit() const
{
    return m_exportsSpaceLimit;
}

void UpdateSubscriptionPlanVM::setExportsSpaceLimit(int64_t value)
{
    m_exportsSpaceLimit = value;
    m_exportsSpaceLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::exportsSpaceLimitIsSet() const
{
    return m_exportsSpaceLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetexportsSpaceLimit()
{
    m_exportsSpaceLimitIsSet = false;
}
int64_t UpdateSubscriptionPlanVM::getFileUploadSizeLimit() const
{
    return m_fileUploadSizeLimit;
}

void UpdateSubscriptionPlanVM::setFileUploadSizeLimit(int64_t value)
{
    m_fileUploadSizeLimit = value;
    m_fileUploadSizeLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::fileUploadSizeLimitIsSet() const
{
    return m_fileUploadSizeLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetfileUploadSizeLimit()
{
    m_fileUploadSizeLimitIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getDataSourceLimit() const
{
    return m_dataSourceLimit;
}

void UpdateSubscriptionPlanVM::setDataSourceLimit(int32_t value)
{
    m_dataSourceLimit = value;
    m_dataSourceLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::dataSourceLimitIsSet() const
{
    return m_dataSourceLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetdataSourceLimit()
{
    m_dataSourceLimitIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getMaxUsersCount() const
{
    return m_maxUsersCount;
}

void UpdateSubscriptionPlanVM::setMaxUsersCount(int32_t value)
{
    m_maxUsersCount = value;
    m_maxUsersCountIsSet = true;
}

bool UpdateSubscriptionPlanVM::maxUsersCountIsSet() const
{
    return m_maxUsersCountIsSet;
}

void UpdateSubscriptionPlanVM::unsetmaxUsersCount()
{
    m_maxUsersCountIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getGroupLimit() const
{
    return m_groupLimit;
}

void UpdateSubscriptionPlanVM::setGroupLimit(int32_t value)
{
    m_groupLimit = value;
    m_groupLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::groupLimitIsSet() const
{
    return m_groupLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetgroupLimit()
{
    m_groupLimitIsSet = false;
}
bool UpdateSubscriptionPlanVM::isOnlineDesigner() const
{
    return m_onlineDesigner;
}

void UpdateSubscriptionPlanVM::setOnlineDesigner(bool value)
{
    m_onlineDesigner = value;
    m_onlineDesignerIsSet = true;
}

bool UpdateSubscriptionPlanVM::onlineDesignerIsSet() const
{
    return m_onlineDesignerIsSet;
}

void UpdateSubscriptionPlanVM::unsetonlineDesigner()
{
    m_onlineDesignerIsSet = false;
}
bool UpdateSubscriptionPlanVM::isIsDemo() const
{
    return m_isDemo;
}

void UpdateSubscriptionPlanVM::setIsDemo(bool value)
{
    m_isDemo = value;
    m_isDemoIsSet = true;
}

bool UpdateSubscriptionPlanVM::isDemoIsSet() const
{
    return m_isDemoIsSet;
}

void UpdateSubscriptionPlanVM::unsetisDemo()
{
    m_isDemoIsSet = false;
}
utility::string_t UpdateSubscriptionPlanVM::getUrlToBuy() const
{
    return m_urlToBuy;
}

void UpdateSubscriptionPlanVM::setUrlToBuy(const utility::string_t& value)
{
    m_urlToBuy = value;
    m_urlToBuyIsSet = true;
}

bool UpdateSubscriptionPlanVM::urlToBuyIsSet() const
{
    return m_urlToBuyIsSet;
}

void UpdateSubscriptionPlanVM::unseturlToBuy()
{
    m_urlToBuyIsSet = false;
}
bool UpdateSubscriptionPlanVM::isUnlimitedPage() const
{
    return m_unlimitedPage;
}

void UpdateSubscriptionPlanVM::setUnlimitedPage(bool value)
{
    m_unlimitedPage = value;
    m_unlimitedPageIsSet = true;
}

bool UpdateSubscriptionPlanVM::unlimitedPageIsSet() const
{
    return m_unlimitedPageIsSet;
}

void UpdateSubscriptionPlanVM::unsetunlimitedPage()
{
    m_unlimitedPageIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getPageLimit() const
{
    return m_pageLimit;
}

void UpdateSubscriptionPlanVM::setPageLimit(int32_t value)
{
    m_pageLimit = value;
    m_pageLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::pageLimitIsSet() const
{
    return m_pageLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetpageLimit()
{
    m_pageLimitIsSet = false;
}
std::shared_ptr<TimePeriodType> UpdateSubscriptionPlanVM::getReadonlyTimeLimitType() const
{
    return m_readonlyTimeLimitType;
}

void UpdateSubscriptionPlanVM::setReadonlyTimeLimitType(const std::shared_ptr<TimePeriodType>& value)
{
    m_readonlyTimeLimitType = value;
    m_readonlyTimeLimitTypeIsSet = true;
}

bool UpdateSubscriptionPlanVM::readonlyTimeLimitTypeIsSet() const
{
    return m_readonlyTimeLimitTypeIsSet;
}

void UpdateSubscriptionPlanVM::unsetreadonlyTimeLimitType()
{
    m_readonlyTimeLimitTypeIsSet = false;
}
int32_t UpdateSubscriptionPlanVM::getReadonlyTimeLimit() const
{
    return m_readonlyTimeLimit;
}

void UpdateSubscriptionPlanVM::setReadonlyTimeLimit(int32_t value)
{
    m_readonlyTimeLimit = value;
    m_readonlyTimeLimitIsSet = true;
}

bool UpdateSubscriptionPlanVM::readonlyTimeLimitIsSet() const
{
    return m_readonlyTimeLimitIsSet;
}

void UpdateSubscriptionPlanVM::unsetreadonlyTimeLimit()
{
    m_readonlyTimeLimitIsSet = false;
}
std::shared_ptr<TaskSettingsVM> UpdateSubscriptionPlanVM::getTasks() const
{
    return m_tasks;
}

void UpdateSubscriptionPlanVM::setTasks(const std::shared_ptr<TaskSettingsVM>& value)
{
    m_tasks = value;
    m_tasksIsSet = true;
}

bool UpdateSubscriptionPlanVM::tasksIsSet() const
{
    return m_tasksIsSet;
}

void UpdateSubscriptionPlanVM::unsettasks()
{
    m_tasksIsSet = false;
}
}
}
}


