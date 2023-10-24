1. Open the SFTP.sact file and drag and drop 'Cloud Connection' from the toolbox
2. Select SFTP from the cloud providers and define your connection. Browse to the relevant parent folder and click on test connection
3. Once configured, save it. Next, right click on the SFTP.sact and click on deploy selected file
4. Open the workflow SFTP_Watch.wf and configure the file action object destination folder. This workflow will be called on any file drop in the SFTP watch folder
5. Next, configure and test the email connections
6. Open the data flow for Job Completion and call your API by reconfiguring the API Connection and client
7. Lastly, create a new file drop scheudler giving the path of SFTP_watch workflow to execute
8. Select the frequency as 'File Drop' and click on the browser icon arrow to browse cloud connections.
9. You should see the deployed connection from #3 here. Select the folder to watch and save
10. Drop a new file to the SFTP folder and observe the job monitor to see flows execute.