#!/usr/bin/python3
"""Python script that use a given REST API"""
import requests
import sys
import json

if __name__ == "__main__":
    user_id = eval(sys.argv[1])
    url = "https://jsonplaceholder.typicode.com/users/{}/todos".format(user_id)
    response = requests.get(url).text
    res_list = json.loads(response)
    user_url = "https://jsonplaceholder.typicode.com/users/{}".format(user_id)

    user_response = requests.get(user_url).text
    user_dict = json.loads(user_response)

    user_name = user_dict["name"]

    g_count = 0
    count = 0

    for elem in res_list:
        for k, v in elem.items():
            if k == "completed" and v is True:
                count = count + 1
        g_count += 1
    print("Employee {} is done with tasks({}/{}):"
          .format(user_name, count, g_count))

    for elem in res_list:
        for k, v in elem.items():
            if k == "completed" and v is True:
                print("     {}".format(elem['title']))
