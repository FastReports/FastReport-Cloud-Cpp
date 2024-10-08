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
 * ReportsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_ReportsApi_H_
#define FASTREPORT_CLOUD_CLIENT_ReportsApi_H_

#include "CloudKludge.h"

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AuditActionsVM.h"
#include "CppRestOpenAPIClient/model/BreadcrumbsVM.h"
#include "CppRestOpenAPIClient/model/CountVM.h"
#include "CppRestOpenAPIClient/model/CreateFileShareVM.h"
#include "CppRestOpenAPIClient/model/ExportReportVM.h"
#include "CppRestOpenAPIClient/model/ExportVM.h"
#include "CppRestOpenAPIClient/model/FileIconVM.h"
#include "CppRestOpenAPIClient/model/FilePermissionCRUDVM.h"
#include "CppRestOpenAPIClient/model/FilePermissionsVM.h"
#include "CppRestOpenAPIClient/model/FileRenameVM.h"
#include "CppRestOpenAPIClient/model/FileSharingKeysVM.h"
#include "CppRestOpenAPIClient/model/FileSorting.h"
#include "CppRestOpenAPIClient/model/FileTagsUpdateVM.h"
#include "CppRestOpenAPIClient/model/FileVM.h"
#include "CppRestOpenAPIClient/model/FilesVM.h"
#include "CppRestOpenAPIClient/model/FolderIconVM.h"
#include "CppRestOpenAPIClient/model/FolderRenameVM.h"
#include "CppRestOpenAPIClient/model/FolderSizeVM.h"
#include "CppRestOpenAPIClient/model/FolderTagsUpdateVM.h"
#include "CppRestOpenAPIClient/HttpContent.h"
#include "CppRestOpenAPIClient/model/PreviewReportVM.h"
#include "CppRestOpenAPIClient/model/ProblemDetails.h"
#include "CppRestOpenAPIClient/model/ReportCreateVM.h"
#include "CppRestOpenAPIClient/model/ReportFolderCreateVM.h"
#include "CppRestOpenAPIClient/model/ReportVM.h"
#include "CppRestOpenAPIClient/model/ReportsVM.h"
#include "CppRestOpenAPIClient/model/SelectedFilesVM.h"
#include "CppRestOpenAPIClient/model/UpdateFilePermissionsVM.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  ReportsApi 
{
public:

    explicit ReportsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ReportsApi();

    /// <summary>
    /// Delete all folders and files from recycle bin
    /// </summary>
    /// <remarks>
    /// User with a Delete RecycleBin permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    pplx::task<void> reportFolderAndFileClearRecycleBin(
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// Copy folders and files to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get permission for a files and Create permission for a destination folder can access this method.
    /// </remarks>
    /// <param name="subscriptionId">id of current subscription</param>
    /// <param name="selectedFilesVM">VM with files&#39; ids and params of their destination (optional)</param>
    pplx::task<void> reportFolderAndFileCopyFiles(
        utility::string_t subscriptionId,
        boost::optional<std::shared_ptr<SelectedFilesVM>> selectedFilesVM
    ) const;
    /// <summary>
    /// Count all folders and files from recycle bin
    /// </summary>
    /// <remarks>
    /// User with a Get DeletedFiles permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useRegex"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<CountVM>> reportFolderAndFileCountRecycleBinFoldersAndFiles(
        utility::string_t subscriptionId,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Delete folders and files
    /// </summary>
    /// <remarks>
    /// User with a Delete permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">id of current subscription</param>
    /// <param name="selectedFilesVM">VM with files&#39; ids and params of their destination (optional)</param>
    pplx::task<void> reportFolderAndFileDeleteFiles(
        utility::string_t subscriptionId,
        boost::optional<std::shared_ptr<SelectedFilesVM>> selectedFilesVM
    ) const;
    /// <summary>
    /// Get count of files and folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="searchPattern">string, that must be incuded in file or folder name to be counted &lt;br /&gt;              (leave undefined to count all files and folders) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useRegex">set this to true if you want to use regular expression to search (optional, default to false)</param>
    pplx::task<std::shared_ptr<CountVM>> reportFolderAndFileGetCount(
        utility::string_t id,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Get all folders and files from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of folder and files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of folder and files, that have to be returned (optional, default to 0)</param>
    /// <param name="orderBy">indicates a field to sort by (optional, default to new FileSorting())</param>
    /// <param name="desc">indicates if sorting is descending (optional, default to false)</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useRegex"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<FilesVM>> reportFolderAndFileGetFoldersAndFiles(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<std::shared_ptr<FileSorting>> orderBy,
        boost::optional<bool> desc,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Get all folders and files from recycle bin
    /// </summary>
    /// <remarks>
    /// User with a Get DeletedFiles permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    /// <param name="skip">number of folder and files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of folder and files, that have to be returned (optional, default to 0)</param>
    /// <param name="orderBy">indicates a field to sort by (optional, default to new FileSorting())</param>
    /// <param name="desc">indicates if sorting is descending (optional, default to false)</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useRegex"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<FilesVM>> reportFolderAndFileGetRecycleBinFoldersAndFiles(
        utility::string_t subscriptionId,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<std::shared_ptr<FileSorting>> orderBy,
        boost::optional<bool> desc,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Move folders and files to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a files and Create permission for a destination folder can access this method.
    /// </remarks>
    /// <param name="subscriptionId">id of current subscription</param>
    /// <param name="selectedFilesVM">VM with files&#39; ids and params of their destination (optional)</param>
    pplx::task<void> reportFolderAndFileMoveFiles(
        utility::string_t subscriptionId,
        boost::optional<std::shared_ptr<SelectedFilesVM>> selectedFilesVM
    ) const;
    /// <summary>
    /// Move folders and files to bin
    /// </summary>
    /// <remarks>
    /// User with a Delete permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">id of current subscription</param>
    /// <param name="selectedFilesVM">VM with files&#39; ids and params of their destination (optional)</param>
    pplx::task<void> reportFolderAndFileMoveFilesToBin(
        utility::string_t subscriptionId,
        boost::optional<std::shared_ptr<SelectedFilesVM>> selectedFilesVM
    ) const;
    /// <summary>
    /// Recover all folders and files from recycle bin
    /// </summary>
    /// <remarks>
    /// User with a Create RecycleBin permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">subscription id</param>
    pplx::task<void> reportFolderAndFileRecoverAllFromRecycleBin(
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// Recover folders and files from bin
    /// </summary>
    /// <remarks>
    /// User with a SubscriptionCreate permission can access this method.
    /// </remarks>
    /// <param name="subscriptionId">id of current subscription</param>
    /// <param name="selectedFilesVM">VM with files&#39; ids and params of their destination (optional)</param>
    pplx::task<void> reportFolderAndFileRecoverFiles(
        utility::string_t subscriptionId,
        boost::optional<std::shared_ptr<SelectedFilesVM>> selectedFilesVM
    ) const;
    /// <summary>
    /// Get specified folder, calculate it&#39;s size
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<FolderSizeVM>> reportFoldersCalculateFolderSize(
        utility::string_t id
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersCopyFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Delete specified folder
    /// </summary>
    /// <remarks>
    /// User with a Delete Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<void> reportFoldersDeleteFolder(
        utility::string_t id
    ) const;
    /// <summary>
    /// Export specified report folder to a specified format
    /// </summary>
    /// <remarks>
    /// User with Execute Export permission on report folder and  Create Entity on an export folder can access this method.
    /// </remarks>
    /// <param name="id">report folder id</param>
    /// <param name="exportReportVM">export parameters (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersExport(
        utility::string_t id,
        boost::optional<std::shared_ptr<ExportReportVM>> exportReportVM
    ) const;
    /// <summary>
    /// Get specified folder breadcrumbs
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<BreadcrumbsVM>> reportFoldersGetBreadcrumbs(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersGetFolder(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folders from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    /// <param name="orderBy"> (optional, default to new FileSorting())</param>
    /// <param name="desc"> (optional, default to false)</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="useRegex"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<FilesVM>> reportFoldersGetFolders(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<std::shared_ptr<FileSorting>> orderBy,
        boost::optional<bool> desc,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Get count of folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> reportFoldersGetFoldersCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get user&#39;s permissions for a folder by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<FilePermissionCRUDVM>> reportFoldersGetMyPermissions(
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Get specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="name">folder name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="subscriptionId">subscriptionId (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="parentId">parent folder id (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersGetOrCreate(
        boost::optional<utility::string_t> name,
        boost::optional<utility::string_t> subscriptionId,
        boost::optional<utility::string_t> parentId
    ) const;
    /// <summary>
    /// Get all folder permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> reportFoldersGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get user&#39;s root folder (without parents)
    /// </summary>
    /// <remarks>
    /// &gt; Breakchange. Now user model doesn&#39;t contain a root folders.  This method can return error 400 and 404 when subscription is not found.
    /// </remarks>
    /// <param name="subscriptionId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersGetRootFolder(
        boost::optional<utility::string_t> subscriptionId
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersMoveFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Move specified folder to recycle bin
    /// </summary>
    /// <remarks>
    /// User with a Delete Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<void> reportFoldersMoveFolderToBin(
        utility::string_t id
    ) const;
    /// <summary>
    /// Create folder
    /// </summary>
    /// <remarks>
    /// User with a Create Entity permisison can access this method.
    /// </remarks>
    /// <param name="id">Identifier of parent folder id</param>
    /// <param name="reportFolderCreateVM">create VM (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersPostFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<ReportFolderCreateVM>> reportFolderCreateVM
    ) const;
    /// <summary>
    /// Recover specified folder
    /// </summary>
    /// <remarks>
    /// User with a Delete Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="recoveryPath"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> reportFoldersRecoverFolder(
        utility::string_t id,
        boost::optional<utility::string_t> recoveryPath
    ) const;
    /// <summary>
    /// Rename a folder
    /// </summary>
    /// <remarks>
    /// User with a Update Name permision can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="folderRenameVM"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersRenameFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderRenameVM>> folderRenameVM
    ) const;
    /// <summary>
    /// Update a folder&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with a Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="folderIconVM">Update icon model (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderIconVM>> folderIconVM
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="updateFilePermissionsVM"> (optional)</param>
    pplx::task<void> reportFoldersUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> updateFilePermissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with a Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="folderTagsUpdateVM"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> reportFoldersUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderTagsUpdateVM>> folderTagsUpdateVM
    ) const;
    /// <summary>
    /// Copy file to a specified folder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsCopyFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Create a new key, that can be used to share access to a file  (You need Administrate.Anon permission to create a new key)
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="createFileShareVM">parameters for sharing key creation (optional)</param>
    pplx::task<std::shared_ptr<FileSharingKeysVM>> reportsCreateSharingKey(
        utility::string_t id,
        boost::optional<std::shared_ptr<CreateFileShareVM>> createFileShareVM
    ) const;
    /// <summary>
    /// Delete specified file
    /// </summary>
    /// <remarks>
    /// User with Delete permission can access the method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<void> reportsDeleteFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Deletes a sharing key, making links, that utilizing it no longer work
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="key">key to delete</param>
    pplx::task<void> reportsDeleteSharingKey(
        utility::string_t id,
        utility::string_t key
    ) const;
    /// <summary>
    /// Export specified report to a specified format
    /// </summary>
    /// <remarks>
    /// User with Execute Export permission on prepared report and  Create Entity on an export folder can access this method.
    /// </remarks>
    /// <param name="id">report id</param>
    /// <param name="exportReportVM">export parameters (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> reportsExport(
        utility::string_t id,
        boost::optional<std::shared_ptr<ExportReportVM>> exportReportVM
    ) const;
    /// <summary>
    /// Get specified file
    /// </summary>
    /// <remarks>
    /// User with Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsGetFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns list of actions, performed on this file
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="skip"> (optional, default to 0)</param>
    /// <param name="take"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<AuditActionsVM>> reportsGetFileHistory(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Get count of files what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> reportsGetFilesCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all files from specified folder. &lt;br /&gt;  User with Get Entity permission can access this method. &lt;br /&gt;  The method will returns minimal infomration about the file: &lt;br /&gt;  id, name, size, editedTime, createdTime, tags, status, statusReason.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="orderBy"> (optional, default to new FileSorting())</param>
    /// <param name="desc"> (optional, default to false)</param>
    /// <param name="useRegex"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<ReportsVM>> reportsGetFilesList(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<utility::string_t> searchPattern,
        boost::optional<std::shared_ptr<FileSorting>> orderBy,
        boost::optional<bool> desc,
        boost::optional<bool> useRegex
    ) const;
    /// <summary>
    /// Get current user&#39;s permissions to file
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<std::shared_ptr<FilePermissionCRUDVM>> reportsGetMyPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> reportsGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns all sharing keys, associated with the file
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<std::shared_ptr<FileSharingKeysVM>> reportsGetSharingKeys(
        utility::string_t id
    ) const;
    /// <summary>
    /// Move file to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsMoveFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Move specified file to recycle bin
    /// </summary>
    /// <remarks>
    /// User with Delete permission can access the method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<void> reportsMoveFileToBin(
        utility::string_t id
    ) const;
    /// <summary>
    /// Recover specified file from bin
    /// </summary>
    /// <remarks>
    /// User with Delete permission can access the method.
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="recoveryPath"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> reportsRecoverFile(
        utility::string_t id,
        boost::optional<utility::string_t> recoveryPath
    ) const;
    /// <summary>
    /// Rename a file
    /// </summary>
    /// <remarks>
    /// User with Update Name permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileRenameVM"> (optional)</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsRenameFile(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileRenameVM>> fileRenameVM
    ) const;
    /// <summary>
    /// Make preview for the report.  Generate a new or return exist prepared svg files.  If template was changed will be returned a new.  Pass the &#x60;&#x60; parameter to check prepared timestamp
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">template id</param>
    /// <param name="previewReportVM">Model with parameters (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> reportsStaticPreview(
        utility::string_t id,
        boost::optional<std::shared_ptr<PreviewReportVM>> previewReportVM
    ) const;
    /// <summary>
    /// Update a files&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileIconVM"> (optional)</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileIconVM>> fileIconVM
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="updateFilePermissionsVM"> (optional)</param>
    pplx::task<void> reportsUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> updateFilePermissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileTagsUpdateVM"> (optional)</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileTagsUpdateVM>> fileTagsUpdateVM
    ) const;
    /// <summary>
    /// Upload a file to the specified folder. The method is deprecated, use the UploadFileV2 method instead!
    /// </summary>
    /// <remarks>
    /// User with Create Entity permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="reportCreateVM">file&#39;s view model (optional)</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsUploadFile(
        utility::string_t id,
        boost::optional<std::shared_ptr<ReportCreateVM>> reportCreateVM
    ) const;
    /// <summary>
    /// Alternative api for upload a file to the specified folder!
    /// </summary>
    /// <remarks>
    /// User with Create Entity permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="fileContent"></param>
    /// <param name="templateId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tags"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="icon"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<ReportVM>> reportsUploadFileV2(
        utility::string_t id,
        std::shared_ptr<HttpContent> fileContent,
        boost::optional<utility::string_t> templateId,
        boost::optional<std::vector<utility::string_t>> tags,
        boost::optional<std::shared_ptr<HttpContent>> icon
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_ReportsApi_H_ */

