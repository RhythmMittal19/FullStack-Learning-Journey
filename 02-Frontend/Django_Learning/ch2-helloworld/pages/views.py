from django.http import HttpResponse # new
from django.shortcuts import render

# Create your views here.
def home_page_view(request): #new
    return HttpResponse("Hello, World!")
